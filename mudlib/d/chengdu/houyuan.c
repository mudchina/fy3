
inherit ROOM;

void create()
{
        set("short", "后院");
        set("long", @LONG
这里是假日客店的后院，这里有辆马车，专门负责迎
送住店的客人。
LONG);

        set("no_fight", 1);
        set("exits" , ([
             "enter": __DIR__"chexiang",
           ]));

        setup();

}


