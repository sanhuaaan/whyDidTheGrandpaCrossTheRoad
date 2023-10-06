package;

import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.FlxObject;

class PlTwo extends Player{

	public function new()	
	{
		this.spawnX = 705-39;
		this.spawnY = 250;
		super();	
		this.destino = 0;
		setFacingFlip(FlxObject.LEFT, true, false);
 		setFacingFlip(FlxObject.RIGHT, false, false);
 		animation.add("walk", [8, 9, 10, 11], 25, false);
 		animation.add("attack", [12], 0, false);
 		animation.add("idle", [7], 0, false);
 		animation.add("knocked", [13], 0, false);

 		this.facing = FlxObject.LEFT;	
		
 	}

 	override public function update():Void
	{
		_up = FlxG.keys.anyPressed(["UP"]);
		_down = FlxG.keys.anyPressed(["DOWN"]);
		_left = FlxG.keys.anyPressed(["LEFT"]);
		_right = FlxG.keys.anyPressed(["RIGHT"]);
		_attack = FlxG.keys.anyJustPressed(["ENTER"]);
		super.update();
	}
}