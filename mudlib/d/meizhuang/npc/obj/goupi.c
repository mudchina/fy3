// turou.c 野兔肉 by ksusan 8/03/97 8:45

inherit ITEM;

void create()
{
	set_name("狗皮",({"gou pi","pi"}));
	set_weight(80);
	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long","一张上好的狗皮，看样子可以卖点钱。\n");
	set("unit","张");
	set("value",200);
	}
}
