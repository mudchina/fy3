inherit ROOM;

void create()
{
        set("short", "练功房");
        set("long", @LONG
        这里是明教的练功房，四周放这几个兵器架，上面是明教各
弟子平时练功用的兵器，这可是真家伙。地上还有防护用品。
LONG
        );
        set("exits", ([
                "west" : __DIR__"dadian",
        ]));
        set("objects", ([
                "/d/mingjiao/obj/changjian" : 1,
                "/d/mingjiao/obj/toukui":1,
                "/d/mingjiao/obj/gangdao":1,
                "/d/obj/armor/tiejia.c":1,
                                    ]));

        set("no_fight", 1);

        setup();
        replace_program(ROOM);
}
