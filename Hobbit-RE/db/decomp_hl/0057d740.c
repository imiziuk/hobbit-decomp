
void __thiscall
FUN_0057d740(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 local_1bc [12];
  undefined1 local_1b0 [420];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbe9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_Coll_ApplyAABBoxToVolume_007404ec);
  uVar1 = *(undefined4 *)(param_1 + 0x42dc);
  uVar2 = *(undefined4 *)(param_1 + 0x42d8);
  local_4 = 0;
  FUN_00607f20(param_2,local_1bc);
  puVar4 = local_1b0;
  iVar3 = 0xc;
  do {
    FUN_0057cdf0(puVar4 + -0xc,puVar4,puVar4 + 0xc,uVar2,uVar1,param_5);
    puVar4 = puVar4 + 0x24;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

