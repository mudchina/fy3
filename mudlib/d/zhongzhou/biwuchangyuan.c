

inherit ROOM;

void create()
{
        set("short", "比武场大院");
        set("long", @LONG
烦啊 写描述真烦啊 @_@
LONG
        );
set("outdoors","/d/zhongzhou");
set("no_fight",1);

        set("exits", ([
                 "south" : __DIR__"biwuchangmen.c",
                 "up" : __DIR__"biwuchang.c",
]));
          set("objects", ([
                   __DIR__"npc/guard.c" : 2,

        ]));

        setup();
}
int valid_leave(object who,string dir)
{
        object npc;
        npc=present("guard man",this_object());
         if(dir=="up" && !(int)who->query_temp("war_money") && objectp(npc)) {
        return notify_fail("门卫冷笑道：没付银子就想进去，滚开。\n");
             }
        if(who->query_temp("war_money"))
             who->delete_temp("war_money");
        return ::valid_leave(who,dir);
}


