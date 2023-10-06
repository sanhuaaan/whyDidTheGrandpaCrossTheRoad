package;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.util.FlxAngle;
import flixel.FlxObject;
import flixel.system.FlxSound;
import flixel.util.FlxDestroyUtil;

class Player extends FlxSprite
{
	public var speed:Float = 300;
	private var _up:Bool = false;
	private var _down:Bool = false;
	private	var _left:Bool = false;
	private	var _right:Bool = false;
	public var _attack:Bool = false;
	public var atacando:Bool = false;
	public var spawnX:Float;
	public var spawnY:Float;
	private var attackTimer:Float = 0; 
	public var knocked:Bool = false;
	private var knockedTimer:Float = 0.5; 
	public var puntos:Int = 0;
	public var destino:Int; //1-dch - 0-izq
	private var _sndPoint:FlxSound;
	//private var _sndStep:FlxSound;




	public function new()	
	{
		super(this.spawnX, this.spawnY);		
		drag.x = drag.y = 4000;
		loadGraphic(AssetPaths.playersx39__png, true, 39, 39);
		_sndPoint = FlxG.sound.load(AssetPaths.point__wav);
		//_sndStep = FlxG.sound.load(AssetPaths.step__wav);		

 	}

 	override public function update():Void
	{		
		puntua();

	    if(!this.knocked)
	    	movement();
	    else
	    {	    	
	    	animation.play("knocked");
	    	knockedTimer -= FlxG.elapsed;         
	        if (knockedTimer <= 0) {
	        	knockedTimer = 0.5;
	            this.knocked = false;             
	        } 
	    }

	    //Evitar out-of-layout
	    if (this.x < 0)
	    	this.x = 0;
	    if (this.x > 720 - this.width)
	    	this.x = 720 - this.width;
	    if (this.y < 0)
	    	this.y = 0;
	    if (this.y > 480 - this.height)
	    	this.y = 480 - this.height;

	    
	    super.update();
	}

 	private function movement():Void
	{	
		if(_attack){
			attackTimer = 0.25;
			atacando = true;
		}

		attackTimer -= FlxG.elapsed;         
        if (attackTimer <= 0) {
            atacando = false;                         
        } 
		
		if (_up && _down)
			_up = _down = false;
		if (_left && _right)
			_left = _right = false;


		if ((_up || _down || _left || _right) && !atacando)
		{
			var mA:Float = 0;
			if (_left)
			{
				mA = 180;
				if(_up)
					mA += 45;
				else if(_down)
					mA -= 45;
				facing = FlxObject.LEFT;
			}    			
			else if (_right)
			{
				mA = 0;
				if(_up)
					mA -= 45;
				else if (_down)
					mA += 45;
				facing = FlxObject.RIGHT;
			} 			
			else if (_up)
			{
				mA = -90;				
				//facing = FlxObject.UP;
			}
			else if (_down)
			{
				mA = 90;
				//facing = FlxObject.DOWN;
			}
			
			FlxAngle.rotatePoint(speed, 0, 0, 0, mA, velocity);
		}


		if ((velocity.x != 0 || velocity.y != 0) && !atacando && !knocked)
		{
		    animation.play("walk");
		    //_sndStep.play();
		}

		if(atacando)			
			animation.play("attack");

		if ((velocity.x == 0 && velocity.y == 0) && !atacando && !knocked)
			animation.play("idle");
		
	}

	private function puntua():Void
	{
		if(this.x > 660 && this.destino == 1)
		{
			this.spawnX = 700-39;
			this.puntos ++;
			_sndPoint.play();
			this.destino = 0;
		}
		if(this.x < 20 && this.destino == 0)			
		{
			this.facing = FlxObject.LEFT;
			this.spawnX = 20;
			this.puntos ++;
			_sndPoint.play();
			this.destino = 1;
		}
			
	}

	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		super.destroy();
		_sndPoint = FlxDestroyUtil.destroy(_sndPoint);
		//_sndStep = FlxDestroyUtil.destroy(_sndStep);
	}
}