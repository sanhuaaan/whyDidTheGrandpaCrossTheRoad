package;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.FlxObject;

class Car extends FlxSprite
{
	var speed:Float = 200;
	var calle:Int;
    var arrayColores:Array<String> = ["R", "G", "W", "B", "Y"];

    public function new(calle:Int)
    {
        this.speed = Math.random()*30 + 160;
    	
        switch (calle) {
            case 1: super(100, 580);
            case 2: super(250, 580);
            case 3: super(410, -100);
            case 4: super(560, -100);
        }
    		        
        this.calle = calle;        
        //makeGraphic(60, 80, FlxColor.YELLOW);
        loadGraphic(AssetPaths.coches__png, true, 60, 80);
        for(indiceColor in 1...arrayColores.length)
            animation.add(arrayColores[indiceColor], [indiceColor], 0, false);

        setFacingFlip(FlxObject.UP, false, true);
        setFacingFlip(FlxObject.DOWN, false, false);

        if(calle <= 2)
        {
            this.speed *=-1;
            this.facing = FlxObject.UP; 
        }
            
        
        animation.play(arrayColores[Math.floor(Math.random()*arrayColores.length)]);
    }

    override public function update():Void
	{
		super.update();

        this.velocity.y = speed;

        if(this.y < -100 || this.y > 580)
            this.destroy();
	}
}