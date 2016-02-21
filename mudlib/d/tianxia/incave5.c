// Room: /d/new/tianxia/incave5
#include <localtime.h>
inherit ROOM;
string *paths=({"southup","southdown","northwest","northeast","southeast","southwest","northdown","eastup","eastdown","westup","westdown","in"});

void create()
{
  set ("short", "麒麟洞内");
  set ("long", @LONG
一道高高的台阶从北面的一个小洞窟延伸而下.头顶的山壁高约百丈.四
根雕刻着古朴花纹的巨大石柱撑起整个山洞.
LONG);

  setup();
}
void init()
{
  int where;
  mixed *local;
  local=localtime(time()*60);
  where=(local[LT_HOUR]+1)%24/2;
  set("exits",([
  "northup":__DIR__"incave4",
  paths[where]:__DIR__"danger"+where,
  ]));
 }