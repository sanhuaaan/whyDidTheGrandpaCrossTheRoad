package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.util.FlxMath;
import flixel.FlxObject;
import flixel.util.FlxColor;
import flixel.group.FlxTypedGroup;
import flixel.tweens.FlxTween;
import flash.system.System;
import flixel.tweens.FlxEase;
import flixel.system.FlxSound;
import flixel.util.FlxDestroyUtil;

/**
 * A FlxState which can be used for the actual gameplay.
 */
class PlayState extends FlxState
{
	private var _playerOne:PlOne;
	private var _playerTwo:PlTwo;
	private var arrayIntervalCalles:Array<Int>;
	private var _car:Car;
	private var timer:Float = 30; 
	private var timerText:FlxText;
	private var p1Punttext:FlxText;
	private var p2Punttext:FlxText;
	private var toadderTxt:FlxText;
	private var winnerTxt:FlxText;	
	private var _grpCoches:FlxTypedGroup<Car>;
	private var respawnTimerP1:Float = 1; 
	private var respawnTimerP2:Float = 1; 
	private var closeTimer:Float = 4; 
	private var _sndStart:FlxSound;
	private var _sndEnd:FlxSound;	
	private var _sndAttack:FlxSound;
	private var _sndHit:FlxSound;
	private var _sndDeath:FlxSound;

	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{

		var background:FlxSprite = new FlxSprite(0,0);
		background.loadGraphic(AssetPaths.fondo__png); 
		add(background);
		
		_playerOne = new PlOne();
		_playerTwo = new PlTwo();
 		add(_playerOne);
 		add(_playerTwo);

 		arrayIntervalCalles = new Array<Int>();
 		for(calle in 1...5)
		{
			arrayIntervalCalles[calle] = Math.round(Math.random() * 50);
		}
 		
		super.create();

		_sndStart = FlxG.sound.load(AssetPaths.start__wav);
		_sndStart.play(true);

		_sndEnd = FlxG.sound.load(AssetPaths.end__wav);
		_sndAttack = FlxG.sound.load(AssetPaths.attack__wav);
		_sndHit = FlxG.sound.load(AssetPaths.hit__wav);
		_sndDeath = FlxG.sound.load(AssetPaths.death__wav);

		_grpCoches = new FlxTypedGroup<Car>();
 		add(_grpCoches);

		timerText = new FlxText(0, 0, FlxG.width);
		timerText.setFormat(null, 50, FlxColor.LIME, "center");
		timerText.setBorderStyle(FlxText.BORDER_OUTLINE, FlxColor.BLACK, 2);
		add(timerText);

		p1Punttext = new FlxText(10, 5, FlxG.width);
		p1Punttext.setFormat(null, 48, FlxColor.BLUE);
		p1Punttext.setBorderStyle(FlxText.BORDER_OUTLINE, FlxColor.WHITE, 2);
		add(p1Punttext);

		p2Punttext = new FlxText(650, 5, FlxG.width);
		p2Punttext.setFormat(null, 48, FlxColor.RED);
		p2Punttext.setBorderStyle(FlxText.BORDER_OUTLINE, FlxColor.WHITE, 2);
		add(p2Punttext);

		toadderTxt = new FlxText(0, 200, FlxG.width, "TOADDER!!!");
		toadderTxt.setFormat(null, 50, FlxColor.CHARTREUSE, "center");
		
		FlxTween.tween(toadderTxt, { alpha:0 }, 1, { type: FlxTween.ONESHOT , complete:finishKillToadder} );
		FlxTween.tween(toadderTxt.scale, { x: 2, y: 4 }, 1);
		FlxTween.color(toadderTxt, .2, FlxColor.CHARTREUSE, FlxColor.YELLOW, { type:FlxTween.PINGPONG});

		add(toadderTxt);


		winnerTxt = new FlxText(0, 200, FlxG.width, "You both lose");
		winnerTxt.setFormat(null, 70, FlxColor.CHARTREUSE, "center");
		winnerTxt.setBorderStyle(FlxText.BORDER_OUTLINE, FlxColor.BLACK, 3);
		FlxTween.tween(winnerTxt, { alpha:0 }, .3, { type:FlxTween.PINGPONG});

		//SCANLINES	
		/*
		var effect:FlxSprite = new FlxSprite(0, 0);
		var bitmapdata:BitmapData = new BitmapData(FlxG.width, FlxG.height, true, 0x00000000);
		var scanline:BitmapData = new BitmapData(FlxG.width, 1, true, 0x88001100);
		
		for (i in 0...bitmapdata.height)
		{
			if (i % 3 == 0)
			{
				bitmapdata.draw(scanline, new Matrix(1, 0, 0, 1, 0, i));
			}
		}
		effect.loadGraphic(bitmapdata);
		add(effect);
		*/		
	}

	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		super.destroy();
		_sndStart = FlxDestroyUtil.destroy(_sndStart);	
		_sndEnd = FlxDestroyUtil.destroy(_sndEnd);
		_sndAttack = FlxDestroyUtil.destroy(_sndAttack);
		_sndHit = FlxDestroyUtil.destroy(_sndHit);	
		_sndDeath = FlxDestroyUtil.destroy(_sndDeath);
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
		super.update();

		FlxG.collide(_playerOne, _playerTwo);
		FlxG.overlap(_playerOne, _grpCoches, playerTouchCar);
		FlxG.overlap(_playerTwo, _grpCoches, playerTouchCar);
		

		p1Punttext.text = Std.string(_playerOne.puntos);
		p2Punttext.text = Std.string(_playerTwo.puntos);
		
		for(calleSpawn in 1...5)
		{
			arrayIntervalCalles[calleSpawn]--;
			if(arrayIntervalCalles[calleSpawn] <= 0)
			{
				var _car = new Car(calleSpawn);
				_grpCoches.add(_car);
				arrayIntervalCalles[calleSpawn] = Math.round(Math.random() * 40) + 65;
			}
		}

		timer -= FlxG.elapsed;         
        if (timer <= 0) 
        {
        	closeTimer-=FlxG.elapsed; 
        	if(timerText.text != "TIME OVER!")
        		_sndEnd.play();

			timerText.text = "TIME OVER!";			
            _playerOne.destroy();
            _playerTwo.destroy();  

			if (_playerOne.puntos > _playerTwo.puntos)
			{
				winnerTxt.text = "Player 1 wins";
				winnerTxt.setFormat(null, 70, FlxColor.BLUE, "center");
				winnerTxt.setBorderStyle(FlxText.BORDER_OUTLINE, FlxColor.BLACK, 2);
			}
			else if (_playerOne.puntos < _playerTwo.puntos)
			{
				winnerTxt.text = "Player 2 wins";
				winnerTxt.setFormat(null, 70, FlxColor.RED, "center");
				winnerTxt.setBorderStyle(FlxText.BORDER_OUTLINE, FlxColor.BLACK, 2);
			}				

			add(winnerTxt);

			if (closeTimer <= 0) 
        		System.exit(0);
        }           
        else
        {	
        	if (timer <= 5) 
        	{
        		timerText.setFormat(null, 50, FlxColor.YELLOW, "center");
        		timerText.setBorderStyle(FlxText.BORDER_OUTLINE, FlxColor.BLACK, 2);
        	}
        	timerText.text = Std.string(Math.ceil(timer));
        }


        var _attack:FlxSprite = null;

        if(_playerOne._attack && !_playerOne.knocked)
   		{
			_sndAttack.play(true);
			switch (_playerOne.facing) {
				//case FlxObject.UP: _attack = new AttackCollider(_playerOne.x,_playerOne.y-20);
				//case FlxObject.DOWN: _attack = new AttackCollider(_playerOne.x,_playerOne.y+20);
				case FlxObject.LEFT:
					{
						_attack = new AttackCollider(_playerOne.x-26,_playerOne.y);
						_attack.scale.x *= -1;
					} 
				case FlxObject.RIGHT: _attack = new AttackCollider(_playerOne.x+39,_playerOne.y);						
			}			 
			add(_attack);
			FlxG.overlap(_playerTwo, _attack, playerTwoAttacked);
		}
		

		if(_playerTwo._attack && !_playerTwo.knocked)
   		{
			_sndAttack.play(true);
			switch (_playerTwo.facing) {
				case FlxObject.LEFT:
					{
						_attack = new AttackCollider(_playerTwo.x-26,_playerTwo.y);
						_attack.scale.x *= -1;
					} 
				case FlxObject.RIGHT: _attack = new AttackCollider(_playerTwo.x+39,_playerTwo.y);						
			}			 
			add(_attack);
			FlxG.overlap(_playerOne, _attack, playerOneAttacked);
		}
		

		if(timer > 0)
			respawnPlayer();

		
	}
	
	private function playerTwoAttacked(P:Player, A:FlxObject):Void
	{
		_sndHit.play(true);
		if(!_playerTwo.knocked)
		{
			var hit = new Hit(_playerTwo.x, _playerTwo.y);
	    	add(hit);
	    	switch (_playerOne.facing) {
				case FlxObject.UP: _playerTwo.velocity.y = -1000;
				case FlxObject.DOWN: _playerTwo.velocity.y = 1000;
				case FlxObject.LEFT: _playerTwo.velocity.x = -1000;
				case FlxObject.RIGHT: _playerTwo.velocity.x = 1000;
			}
		_playerTwo.knocked = true;	
		
		}	   
	}

	private function playerOneAttacked(P:Player, A:FlxObject):Void
	{
		_sndHit.play(true);
		if(!_playerOne.knocked)
		{
			var hit = new Hit(_playerOne.x, _playerOne.y);
	    	add(hit);
		    	switch (_playerTwo.facing) {
				case FlxObject.UP: _playerOne.velocity.y = -1000;
				case FlxObject.DOWN: _playerOne.velocity.y = 1000;
				case FlxObject.LEFT: _playerOne.velocity.x = -1000;
				case FlxObject.RIGHT: _playerOne.velocity.x = 1000;
			}	   
		}
		_playerOne.knocked = true;			
	}

	private function playerTouchCar(P:Player, C:Car):Void
	{	
		_sndDeath.play(true);	
	    P.kill();
		if(P.knocked)
		{
			P.velocity.x = 0;
			P.velocity.y = 0;
			P.knocked = false;
		}	    	

	    var skull = new Dead(P.x, P.y);
	    add(skull);	     
	    P.setPosition(P.spawnX, P.spawnY);
	}

	private function respawnPlayer():Void
	{
		if(!_playerOne.alive)
		{
			respawnTimerP1 -= FlxG.elapsed;         
	        if (respawnTimerP1 <= 0) {
	        	respawnTimerP1 = 1;
	        	_playerOne.revive();             
	        } 
		}
		if(!_playerTwo.alive)
		{
			respawnTimerP2 -= FlxG.elapsed;         
	        if (respawnTimerP2 <= 0) {
	        	respawnTimerP2 = 1;
	        	_playerTwo.revive();             
	        } 
		}
			
	        
	}

	private function finishKillToadder(_):Void
	{
		toadderTxt.kill();
	    toadderTxt.exists = false;
	}


}