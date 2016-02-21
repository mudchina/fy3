// Room: bianj056.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "龙亭");
	set("long",@LONG
这里是汴京龙亭，重檐歇山顶的正殿坐落在高十三米的巨
大砖砌台基上，远远望去犹如天上宫阙。亭正面的石阶分三层
共七十二级，石阶中间嵌有雕龙青石，甚为精致。亭内放置一
块巨大黑色“龙墩”，是宣读皇帝诏书的地方。由于战火连年
使得周围宫殿所剩无几，只有这座龙亭独立于湖畔。
LONG
);
       set("exits", ([ /* sizeof() == 1 */
            "down"  : __DIR__"bianj053",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
