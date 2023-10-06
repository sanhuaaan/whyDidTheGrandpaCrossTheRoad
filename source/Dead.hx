package;

import flixel.FlxSprite;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;
import flixel.util.FlxDestroyUtil;

class Dead extends FlxSprite{

	public function new(X:Float, Y:Float)	
	{
		super(X, Y);
		loadGraphic(AssetPaths.dead__png, true, 39, 39);
		animation.add("laugh", [0, 1], 15);
		animation.play("laugh", true);

		FlxTween.tween(this.scale, { x: 7, y: 7 }, 1 );
		FlxTween.tween(this, { alpha:0 }, 1, { complete:finishKill});
	}

	override public function update():Void	{
		super.update();
	}	

	private function finishKill(_):Void
	{
	    this.destroy();
	}
}