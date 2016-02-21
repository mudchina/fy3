inherit ITEM;
inherit F_LIQUID;

void create()
{
 set_name("青花大水碗", ({"shuiwan", "bowl"}));
   set_weight(1000);
   if (clonep())
     set_default_object(__FILE__);
   else {
set("long","一个青花的瓷碗，缺了老大一个口子.\n");
set("unit","只");
set("value",0);
set("max_liquid",15);
   }

   set("liquid", ([
"type":"water",
"name":"凉水",
"remaining": 15,
"drunk_apply": 3,
   ]));
}
