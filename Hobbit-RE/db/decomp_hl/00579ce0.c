
void __thiscall
FUN_00579ce0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbd18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_Coll_ApplyAABBox_007403c0);
  local_4 = 0;
  switch(*(undefined4 *)(param_1 + 0x3d48)) {
  case 1:
    FUN_0057d1e0(param_2,*(undefined4 *)(param_1 + 0x42d8),*(undefined4 *)(param_1 + 0x42dc),param_5
                );
    break;
  case 2:
  case 3:
    FUN_0057d3e0(param_2,*(undefined4 *)(param_1 + 0x42d8),*(undefined4 *)(param_1 + 0x42dc),param_5
                );
    break;
  case 4:
  case 5:
    FUN_0057d590(param_2,0,0,0);
    break;
  case 6:
    FUN_0057d590(param_2,0,0,0);
    break;
  case 7:
    FUN_0057d740(param_2,0,0,0);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

