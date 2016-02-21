inherit ROOM;
void create()
{
        set("short", "走廊");
        set("long", @LONG
这里是走廊。走廊北侧的通往明教弟子休息的地方，西面就是饭
堂，这里来往的人不多，更显得明教人丁寥落。
LONG
        );

        set("exits", ([
                "west" : __DIR__"shitang",
                "north" : __DIR__"workroom",
                "east" : __DIR__"dadian",
                ]));

        setup();
        replace_program(ROOM);
}
