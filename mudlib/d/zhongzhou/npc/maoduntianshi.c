inherit KZZNPC;
#include <ansi.h>

string query_save_file() { return DATA_DIR + "npc/矛盾天师"; }
void create()
{
#include <kzznpc.h>
set("area_name","矛盾甲胄店");
set("area_file","/d/zhongzhou/maodun.c");
	setup();
}
void init()
{
   ::init();
 add_action("do_xiubu","xiubu");
}
int do_xiubu(string arg)
{
 int damage,max_damage,money,val;
 object obj, me=this_player();
 string bh;

	bh=(string)me->query("banghui");
  if (!arg) return notify_fail("你要修补什么?\n");
  if (!obj=present(arg,me))
          return notify_fail("你身上没有这样东西.\n");
  if (!obj->query("armor_prop"))
     return notify_fail("此地只修补防具.\n");
  damage=(int)obj->query("oldsix/damage");
  if (damage==0) return notify_fail("你的这件防具没坏,不用修.\n");
  val=obj->query("value");
  if (!val||val<=100) return notify_fail("这种一文不名的东西,没人愿意补.\n");
  max_damage=obj->query("oldsix/max_damage");
  if (!max_damage) max_damage=10;
  money=(int)(val*2/max_damage)*damage;
  if ( bh && bh==(string)query("banghui"))
  money=(int)money*2/3;
  if (!me->pay_money(money)) return notify_fail("身上带够了现钱再来.\n");
  message_vision("$N掏出银两给$n道:烦劳天师修补.\n",me,this_object());
  message_vision("$N取出一团七彩锦线,飞针走线,不一会就把"+obj->query("name")+
"修补好了,$n简直看傻了眼.\n",this_object(),me);
  obj->set("oldsix/damage",0);
  return 1;
}