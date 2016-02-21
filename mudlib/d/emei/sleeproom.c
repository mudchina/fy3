#include <ansi.h>;

inherit ROOM;

void create()
{
	set("short", "休息室");
	set("long", @LONG
这里是休息室。洞中靠石壁依山势凿成几张睡榻的模样，洞中很干燥,温度
很适宜。洞中的光线很暗，只在顶上有一颗不知什么珠子发出蒙蒙的光,倦了
的话,不防在这睡上一觉。
LONG
	);
	set("no_clean_up", 0);
	set("sleep_equipment", "石榻");
	set("sleep_room", 1);
	set("no_fight", 1);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"dongzhong1.c",
]));

	setup();
}
void init()
{       object ob;
        string classname;
        if( interactive( ob = this_player()))
        {
        classname = ob->query("family/family_name");
        if(classname !="峨嵋派") {

        ob->move(__DIR__"dongzhong1");
        message_vision(HIW"一股温柔之力把把$N推了出去。\n\n"NOR, ob);
                               }
        }
}

