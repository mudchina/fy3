//liangongfang
  

inherit ROOM;

void create()
{
	set("short", "练功房");
	set("long", @LONG
这里是是戏院内演员的练功房，房内地上铺着厚厚的地毯，有几个
演员摸样的人在踢腿练功。西面的一块大镜子是帮他们纠正动作的。你
看着他们不禁也想动动身子骨，活动活动。
LONG
	);

	set("exits", ([
		"north" : __DIR__"xiyuan",
	]));
	set("objects", ([
		__DIR__"npc/yanyuan" : 1,
		__DIR__"npc/yanyuan1" : 1,
	]));

	setup();
	replace_program(ROOM);
}

