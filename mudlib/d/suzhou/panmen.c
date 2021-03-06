// Room: /d/suzhou/panmen.c

inherit ROOM;

void create()
{
	set("short", "盘门");
	set("long", @LONG
盘门始建于吴王阖闾元年，水陆城门并峙气势雄伟。陆城门内分内外两重，内
外两道城桓构成方形瓮城。与陆城门毗连的水城门是城内外的唯一水陆通道。内外
两道水城门全都是由花岗岩构成，高大的城门洞可容两艘船并列而入。你仿佛看到
当年盘门双重水陆城门照临大运河，车马出入城关船只进出水门的盛旺景象。
LONG
	);
	set("objects",([
	__DIR__"npc/bingyong":2,
]));
	set("exits", ([ /* sizeof() == 1 */
		"north" :__DIR__"chengnanjie4",
		"southeast" :__DIR__"wumenqiao",
		"east" :__DIR__"ruiguangta",
]));
	set("outdoors","suzhou");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
