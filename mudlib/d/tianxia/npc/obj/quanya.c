inherit ITEM;

void create()
{
	set_name("犬牙", ({ "quan ya" }) );
	set_weight(300);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "白森森的一个狗牙齿,上面还有两个蛀牙洞.\n");
		set("unit", "个");
		set("value", 1000);

	}
}
