inherit ITEM;
inherit F_LIQUID;

void create()
{
   set_name("荷花汤盆", ({"tangpen", "pen"}));
   set_weight(1700);
   if (clonep())
     set_default_object(__FILE__);
   else {
     set("long", "一个荷花形状的大汤盆.\n");
     set("unit", "个");
     set("value", 500);
     set("max_liquid", 20);
   }
   set("liquid", ([
     "type": "water",
     "name": "口蘑鸡脚汤",
     "remaining": 10,
     "drunk_supply": 10,
   ]));
}
