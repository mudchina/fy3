#include <ansi.h>

inherit ROOM;

void rtaohua( object ob ) ;

void create()
{
    set("short", "海滩");
    set("long", @LONG
这是桃花岛前的海滩。往北是一望无际的大海；往南则是一片桃花林。
蓝蓝的海蓝蓝的天，金黄色的沙滩，粉红的桃花，这一切都是那么美。海边
泊着一艘大船。
LONG );
   
    set("exits",([
        "south" :__DIR__"tao_in",
        "north" :__DIR__"xiaoyucun",
    ]));
    set("no_clean_up", 0);
    set("outdoors", "taohua");
    setup();
}

