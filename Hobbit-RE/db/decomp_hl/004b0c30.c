
void __thiscall FUN_004b0c30(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_8c;
  undefined4 local_88;
  undefined2 local_84 [28];
  undefined1 local_4c [56];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4030;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_pickup__OnImport_0072bbdc);
  local_4 = 0;
  FUN_00640480(&DAT_0072bbd4,local_4c);
  uVar1 = FUN_00649b20(local_4c);
  local_4._0_1_ = 1;
  uVar1 = FUN_00434eb0(uVar1);
  FUN_004b0eb0(uVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649ba0();
  iVar2 = FUN_00647e80(local_4c,s_Courage_00722fd4,7);
  if (iVar2 == 0) {
    *(byte *)((int)param_1 + 0x16e) = *(byte *)((int)param_1 + 0x16e) | 0x80;
  }
  FUN_00640450(s_Amount_0072bbcc,local_84);
  *(undefined2 *)((int)param_1 + 0x16a) = local_84[0];
  local_8c = 0;
  FUN_006405b0(s_RotatesSlowly_0072bbbc,&local_8c);
  *(ushort *)((int)param_1 + 0x16e) =
       (byte)((byte)*(ushort *)((int)param_1 + 0x16e) ^ (byte)local_8c) & 1 ^
       *(ushort *)((int)param_1 + 0x16e);
  FUN_006405b0(s_BobsSlowly_0072bbb0,&local_8c);
  *(ushort *)((int)param_1 + 0x16e) =
       (byte)((char)local_8c * '\x02' ^ (byte)*(ushort *)((int)param_1 + 0x16e)) & 2 ^
       *(ushort *)((int)param_1 + 0x16e);
  FUN_006405b0(s_Regenerates_0072bba4,&local_8c);
  local_88 = 0;
  *(ushort *)((int)param_1 + 0x16e) =
       (byte)((byte)(local_8c << 4) ^ (byte)*(ushort *)((int)param_1 + 0x16e)) & 0x10 ^
       *(ushort *)((int)param_1 + 0x16e);
  iVar2 = FUN_00640450(s_GlowOffDist_0072bb98,&local_88);
  if (iVar2 != 0) {
    *(undefined2 *)(param_1 + 0x5e) = (undefined2)local_88;
  }
  iVar2 = FUN_00640450(s_GlowOnDist_0072bb8c,&local_88);
  if (iVar2 != 0) {
    *(undefined2 *)((int)param_1 + 0x17a) = 0;
  }
  local_8c = 1;
  FUN_006405b0(s_DoesVacuum_0072bb80,&local_8c);
  *(ushort *)((int)param_1 + 0x16e) =
       ((ushort)(local_8c << 9) ^ *(ushort *)((int)param_1 + 0x16e)) & 0x200 ^
       *(ushort *)((int)param_1 + 0x16e);
  FUN_004c2430(param_2);
  (**(code **)(*param_1 + 0x8c))(1,0xffffffff);
  FUN_004ab3e0(0);
  FUN_004ab400(0);
  FUN_004ab420(0);
  FUN_004ab450(0);
  FUN_004ab480(0);
  pvStack_c = (void *)0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_14;
  return;
}

