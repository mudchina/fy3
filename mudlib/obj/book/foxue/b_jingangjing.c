// 

inherit ITEM;

void create()
{
        set_name("《金刚经》", ({"jingangjing", "jing" }));
        set_weight(100);
        set("unit", "本");
        set("long",
                
                "大乘佛学经典，一定要读(read)一读.\n"
             );
        set("value", 3000);
        set("skill", ([
                "name": "foxuexinde",
                "age" : 16,         
                "max_skill":    60 
        ]) );
}
 
void init()
{
	add_action("do_read", "read");
}


int do_read(string arg)
{
object me;
if( !id(arg) ) return 0;
me=this_player();
switch(3)
 {
  case 0: tell_object(me,"你读到“应无所住而生其心”，突然有点感触。\n");
          break;
  case 1: tell_object(me,"你读到“凡所有相皆是虚妄”，突然一阵失落。\n");          
          break;
  case 2: tell_object(me,"你读到“过去心不可得。。。”，好象有点领悟。\n");
          if( me->query("bellicosity") >0 )   
           {
            me->add("bellicosity", (-1)* random(10) );
            tell_object(me,"你突然有放下屠刀立地成佛的念头。\n");
           }

          break;
 }
	return 1;
}
