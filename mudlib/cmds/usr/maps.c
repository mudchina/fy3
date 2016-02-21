inherit F_CLEAN_UP;

int main(object me, string arg)
{
//	int i;
	string file,where;
	object env;
env=environment(me);
where=env->query("outdoors");
if (!where)
   return notify_fail("在一指令只能在室外使用.\n");
if(sscanf(where, "/d/%s",file)==1)   {
	file="map_"+file;
	if (file_size("/doc/map/"+file)>0)  { 
			me->start_more( read_file("/doc/map/"+file) );
			return 1;
	}
  }
 file="map_"+where;
 if (file_size("/doc/map/"+file)>0)   {
 me->start_more(read_file("/doc/map/"+file));
 return 1;
 }
return notify_fail("没有找到这份地图。\n");
}
int help()
{
    write(@HELP
指令格式：maps
显示当前所处地图.
HELP );
    return 1;
}
