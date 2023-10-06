package;

import flixel.FlxSprite;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;

class Hit extends FlxSprite{

	public function new(X:Float, Y:Float)	
	{
		super(X, Y);
		loadGraphic(AssetPaths.hit__png, true, 39, 39);
		animation.add("plas", [0, 1], 15);
		animation.play("plas", true);
		FlxTween.tween(this, { alpha:0 }, .2);
		FlxTween.tween(scale, { x: 3, y: 3 }, .2, { type: FlxTween.ONESHOT , complete:finishKill} );
	}

	override public function update():Void	{
		super.update();		

	}	

	private function finishKill(_):Void
	{
		this.destroy();
	}
	
}