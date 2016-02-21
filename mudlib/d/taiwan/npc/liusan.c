inherit NPC;
int go_leave();
void on_board();
void arrive();
void create()
{
        set_name("刘三爷",({"liusan","liu"}));
        set("gender","男性");
        set("combat_exp",300000);
        set("force",700);
        set("max_force",700);
        set("nickname","独眼");
        set("long","刘三靠着在这海峡两边倒运货物赚了许多,看来
这次他正好要出海,你可以问他关于出海的事情.
(ask liu about 出海).");
        set("inquiry",([
                 "出海":(:go_leave:),
                 "独眼":"我以前不听人家的话,到庄家老屋去,丢了一只眼睛!\n",
             ]));
        set("age",43);
              set_skill("parry",120);
              set_skill("dodge",120);
              set_skill("unarmed",120);
              setup();
              carry_object("/obj/cloth")->wear();
              add_money("silver",80);
 }
int go_leave()
{  object ob,room;
    ob=this_player();
    if (!ob||environment()!=environment(ob)) return;
    room=load_object("/d/taiwan/chuan");
    if (room->query("exits/out")=="/d/taiwan/matou")
    {  command("say 我这船正要到泉州去,可以带你一段!\n");
       command("say 你稍等一下,我装完货就走!\n");
       if (clonep(this_object())) call_out("on_board",10,1);
      return 1;
   }
  command("say 你不是已经在船上了么?\n");
  return 1;
}
void on_board()
{
	object * all,ob,room;
	int i,j;

	ob=this_object();
	room=load_object("/d/taiwan/matou");
	i=0;
	all = all_inventory(environment(ob));
	        
	for (j=0; j<sizeof(all); j++) 
	{
		if( all[j]==this_object() ||!all[j]->is_character()) continue;
		{ i=1; }
	}
	if(i==1)
	{      command("emote 大声呼喊:开---船---啦---\n");
		message("vision", "水手扯起风帆,货船向大海驶去。\n",room );	
		message_vision("水手扯起风帆,小货船向大海驶去。\n",this_object());	

		if( clonep(this_object()) ) call_out("arrive", 20, 1);
      room = load_object("/d/taiwan/chuan");
	room->delete("exits/out");
      room = load_object("/d/taiwan/matou");
	room->delete("exits/in");
	
        }
    else return;
    	
}

void arrive()
{
	object *all,ob,room,ob1;
	int i;
       ob1=this_player();
	room = load_object("/d/quanzhou/haigang");
      message_vision("小货船慢慢地靠上了安海港,$N忙着卸货,没顾上你!\n",this_object());
      message("vision", "海港中又一条小货船靠港了。\n",room);

	ob=this_object();
	all = all_inventory(environment(ob));	        
	for (i=0; i<sizeof(all); i++) 
	{
		if( all[i]==this_object() ||!all[i]->is_character()) continue;
		{
			message_vision("$N顺着踏脚板走上岸去。\n",all[i]);
			message("vision",all[i]->name()+"顺着踏脚板走上岸来。\n",room);

			all[i]->move("/d/quanzhou/haigang");
		}
	}

      room=load_object("/d/taiwan/matou");
      message("vision", "一条小货船慢慢靠上了码头,风帆上有个大大的'刘'字。\n",room);
      room->set("exits/in","/d/taiwan/chuan");
           load_object("/d/taiwan/chuan")->set("exits/out","/d/taiwan/matou");
           return;
}
    
