package;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;

class AttackCollider extends FlxSprite{

	public function new(X:Float=0, Y:Float=0)	
	{		
		super(X, Y);	
		loadGraphic(AssetPaths.andador__png, true, 26, 26);
		
 	}

 	override public function update():Void
	{
		FlxTween.tween(this, {alpha:0}, .25, {complete:finishKill } );		
	}

	private function finishKill(_):Void
	{
	    exists = false;
	}
}