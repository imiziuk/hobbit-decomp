
void __thiscall FUN_004e2c00(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [4];
  undefined1 local_8c;
  undefined4 local_8b;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d597b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_volume__OnImport_0072e8dc);
  local_8c = DAT_0075b6e0;
  puVar2 = &local_8b;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  local_4 = 0;
  FUN_004aa740(param_2);
  FUN_00640480(&DAT_00725c94,&local_8c);
  (**(code **)(*param_1 + 0x48))(&local_8c);
  FUN_006404b0(&DAT_00726118,&stack0xffffff44);
  FUN_006403a0(&PTR_s_o_Load_Audio_Descriptor__s_00725864,auStack_9c);
  FUN_00640500(s_Orient_00726120,param_1 + 0x1a);
  FUN_006403a0(s_HalfDimensions_0072e8cc,param_1 + 0x2b);
  auStack_90[0] = 0;
  iVar1 = FUN_00640480(&DAT_0072e8c4,auStack_90);
  if (iVar1 == 0) {
    puVar3 = &DAT_0075b6e0;
  }
  else {
    puVar3 = auStack_90;
  }
  FUN_0064a2e0(puVar3);
  FUN_004e2000(auStack_9c,param_1 + 0x2b,param_1 + 0x1a);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_10;
  return;
}

