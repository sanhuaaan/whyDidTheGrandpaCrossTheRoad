package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
			type.set ("assets/data/data-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/andador.png", "assets/images/andador.png");
			type.set ("assets/images/andador.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/andadorx39.png", "assets/images/andadorx39.png");
			type.set ("assets/images/andadorx39.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/coches.png", "assets/images/coches.png");
			type.set ("assets/images/coches.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/dead.png", "assets/images/dead.png");
			type.set ("assets/images/dead.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/fondo.png", "assets/images/fondo.png");
			type.set ("assets/images/fondo.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/fondoMAL.png", "assets/images/fondoMAL.png");
			type.set ("assets/images/fondoMAL.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/hit.png", "assets/images/hit.png");
			type.set ("assets/images/hit.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
			type.set ("assets/images/images-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/player1x26.png", "assets/images/player1x26.png");
			type.set ("assets/images/player1x26.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/player1x39.png", "assets/images/player1x39.png");
			type.set ("assets/images/player1x39.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/playersx39.png", "assets/images/playersx39.png");
			type.set ("assets/images/playersx39.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/portadaP1.png", "assets/images/portadaP1.png");
			type.set ("assets/images/portadaP1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/portadaP2.png", "assets/images/portadaP2.png");
			type.set ("assets/images/portadaP2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/music/intro.wav", "assets/music/intro.wav");
			type.set ("assets/music/intro.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/music/loop.wav", "assets/music/loop.wav");
			type.set ("assets/music/loop.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/attack.wav", "assets/sounds/attack.wav");
			type.set ("assets/sounds/attack.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/death.wav", "assets/sounds/death.wav");
			type.set ("assets/sounds/death.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/end.wav", "assets/sounds/end.wav");
			type.set ("assets/sounds/end.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/hit.wav", "assets/sounds/hit.wav");
			type.set ("assets/sounds/hit.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/point.wav", "assets/sounds/point.wav");
			type.set ("assets/sounds/point.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/ready.wav", "assets/sounds/ready.wav");
			type.set ("assets/sounds/ready.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
			type.set ("assets/sounds/sounds-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/start.wav", "assets/sounds/start.wav");
			type.set ("assets/sounds/start.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/step.wav", "assets/sounds/step.wav");
			type.set ("assets/sounds/step.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/beep.ogg", "assets/sounds/beep.ogg");
			type.set ("assets/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/flixel.ogg", "assets/sounds/flixel.ogg");
			type.set ("assets/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/fonts/nokiafc22.ttf", "assets/fonts/nokiafc22.ttf");
			type.set ("assets/fonts/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/fonts/arial.ttf", "assets/fonts/arial.ttf");
			type.set ("assets/fonts/arial.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
