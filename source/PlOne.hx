package;

import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.FlxObject;
	
class PlOne extends Player{	

	public function new()	
	{
		this.spawnX = 15;
		this.spawnY = 200;
		super();
		this.destino = 1;
		setFacingFlip(FlxObject.LEFT, true, false);
 		setFacingFlip(FlxObject.RIGHT, false, false);
 		animation.add("walk", [1, 2, 3, 4], 25, false);
 		animation.add("attack", [5], 0, false);
 		animation.add("idle", [0], 0, false);
 		animation.add("knocked", [6], 0, false);
 	}

 	override public function update():Void
	{
		_up = FlxG.keys.anyPressed(["W"]);
		_down = FlxG.keys.anyPressed(["S"]);
		_left = FlxG.keys.anyPressed(["A"]);
		_right = FlxG.keys.anyPressed(["D"]);
		_attack = FlxG.keys.anyJustPressed(["SPACE"]);
		super.update();
	}
	
}