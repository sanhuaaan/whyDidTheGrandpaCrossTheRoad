package;

import flixel.FlxG;
import flixel.util.FlxDestroyUtil;
import flixel.util.FlxColor;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;
import flixel.system.FlxSound;
import flixel.FlxSprite;

/**
 * A FlxState which can be used for the game's menu.
 */
class MenuState extends FlxState
{
	private var p1Ready:Bool=false;
	private var p2Ready:Bool=false;
	private var p1ReadyTxt:FlxText;
	private var p2ReadyTxt:FlxText;
	private var timerTxt:FlxText;
	private var sanjuTxt:FlxText;
	private var startTimer:Float = 3; 
	private var _sndReady:FlxSound;
	

	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{		
		super.create();

		FlxG.mouse.visible = false;

		var titleText = new FlxText(0, 100, FlxG.width, "Why did the grandpa cross the road?");
		titleText.setFormat(null, 50, FlxColor.BLUE, "center");
		//titleText.setBorderStyle(FlxText.BORDER_OUTLINE, FlxColor.WHITE, 2);
		add(titleText);

		FlxTween.tween(titleText.scale, { x: 1.2, y: 1.7 }, .5, { type:FlxTween.PINGPONG, ease:FlxEase.bounceInOut});
		FlxTween.angle(titleText, -10, 10, .4, { type:FlxTween.PINGPONG, ease:FlxEase.sineInOut});
		FlxTween.color(titleText, .2, FlxColor.BLUE, FlxColor.RED, { type:FlxTween.PINGPONG});

		_sndReady = FlxG.sound.load(AssetPaths.ready__wav);
		
		p1ReadyTxt = new FlxText(0, 380, FlxG.width, "Player 1 Ready");
		p1ReadyTxt.setFormat(null, 30, FlxColor.BLUE, "center");
		FlxTween.tween(p1ReadyTxt, { alpha:0 }, .3, { type:FlxTween.PINGPONG});
		add(p1ReadyTxt);
		p2ReadyTxt = new FlxText(0, 430, FlxG.width, "Player 2 Ready");
		p2ReadyTxt.setFormat(null, 30, FlxColor.RED, "center");
		FlxTween.tween(p2ReadyTxt, { alpha:0 }, .3, { type:FlxTween.PINGPONG});
		add(p2ReadyTxt);
		timerTxt = new FlxText(0, 300, FlxG.width);
		timerTxt.setFormat(null, 46, FlxColor.CHARTREUSE, "center");
		add(timerTxt);
		sanjuTxt = new FlxText(0, 455, FlxG.width, "Sanju (2015)");
		sanjuTxt.setFormat(null, 8, FlxColor.GOLDEN);
		add(sanjuTxt);
		
		var playerBlue:FlxSprite = new FlxSprite(30,300);
		playerBlue.loadGraphic(AssetPaths.portadaP1__png);
		FlxTween.angle(playerBlue, -10, 10, .4, { type:FlxTween.PINGPONG, ease:FlxEase.sineInOut}); 
		add(playerBlue);
		var playerRed:FlxSprite = new FlxSprite(720-30-104,300);
		playerRed.loadGraphic(AssetPaths.portadaP2__png);
		FlxTween.angle(playerRed, -10, 10, .4, { type:FlxTween.PINGPONG, ease:FlxEase.sineInOut}); 
		add(playerRed);
	}
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		super.destroy();
		p1ReadyTxt = FlxDestroyUtil.destroy(p1ReadyTxt);
		p2ReadyTxt = FlxDestroyUtil.destroy(p2ReadyTxt);
		timerTxt = FlxDestroyUtil.destroy(timerTxt);
		_sndReady = FlxDestroyUtil.destroy(_sndReady);			
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
		super.update();
		
		if(FlxG.keys.anyJustPressed(["SPACE"]))
		{
			p1Ready = true;
			_sndReady.play(true);
		}

		if(FlxG.keys.anyJustPressed(["ENTER"]))
		{
			p2Ready = true;
			_sndReady.play(true);
		}
				
		p1ReadyTxt.visible = p1Ready;
		p2ReadyTxt.visible = p2Ready;

		if(p1Ready && p2Ready)
		{
			startTimer -= FlxG.elapsed;         
	        if (startTimer <= 0) 
	        {
	        	FlxG.sound.destroy(true);	        	
	        	FlxG.sound.playMusic(AssetPaths.loop__wav, 1, true);
	            FlxG.switchState(new PlayState()); 
	        }          
	        else
	        {		        	
	        	timerTxt.text = Std.string(Math.ceil(startTimer));
	        }
		}

		

	}	

}