inherit ITEM;
inherit F_FOOD;

void create()
{
	set_name("ǧ���", ({"qian cenggao"}));
	set_weight(800);
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("long", "��ǧ�����һ�����һ���������ͣ�����
����������������\n");
		set("unit", "��");
		set("value", 15);
		set("food_remaining", 3);
		set("food_supply", 20);
	}
}
