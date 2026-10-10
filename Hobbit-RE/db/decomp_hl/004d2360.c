
void __thiscall FUN_004d2360(int param_1,int param_2,byte param_3)

{
  undefined3 uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 local_4;
  
  if (((*(ushort *)(param_1 + 0x7a) & 0x1000) != 0) ||
     (((*(ushort *)(param_1 + 0x7a) & 0x2000) != 0 && (*(char *)(param_1 + 0x128) < '\x01')))) {
    local_4 = *(uint *)(param_1 + 0x82);
    if (param_2 != 0) {
      uVar2 = FUN_004aac30();
      pbVar3 = (byte *)FUN_00583210(uVar2);
      uVar7 = (uint)pbVar3[2] + (local_4 >> 0x10 & 0xff);
      uVar8 = 0xff;
      if (uVar7 < 0x100) {
        local_4._0_3_ = CONCAT12((char)uVar7,(ushort)local_4);
        uVar1 = (undefined3)local_4;
      }
      else {
        local_4._0_3_ = CONCAT12(0xff,(ushort)local_4);
        uVar1 = (undefined3)local_4;
      }
      local_4 = CONCAT13(local_4._3_1_,uVar1);
      uVar2 = local_4;
      local_4._1_1_ = (byte)((uint3)uVar1 >> 8);
      local_4._0_1_ = (undefined1)uVar1;
      local_4._2_2_ = SUB42(uVar2,2);
      if ((uint)pbVar3[1] + (uint)local_4._1_1_ < 0x100) {
        local_4._0_2_ = CONCAT11((char)((uint)pbVar3[1] + (uint)local_4._1_1_),(undefined1)local_4);
      }
      else {
        local_4._0_2_ = CONCAT11(0xff,(undefined1)local_4);
      }
      uVar6 = (ushort)*pbVar3 + ((ushort)local_4 & 0xff);
      if (uVar6 < 0x100) {
        local_4 = CONCAT31(local_4._1_3_,(char)uVar6);
      }
      else {
        local_4 = CONCAT31(local_4._1_3_,0xff);
      }
      uVar7 = (uint)pbVar3[3] + (local_4 >> 0x18);
      if (uVar7 < 0x100) {
        uVar8 = (undefined1)uVar7;
      }
      local_4 = CONCAT13(uVar8,(undefined3)local_4);
    }
    uVar4 = FUN_004aac10();
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar9 = (uint)(param_2 == 0);
    uVar7 = (uint)param_3;
    uVar10 = uVar2;
    FUN_00425250(&local_4);
    FUN_00582ea0(param_1 + 0x44,param_1 + 0xc4,uVar2,uVar9,uVar10,uVar7,uVar4);
    iVar5 = *(char *)(param_1 + 0x128) + 10;
    if (iVar5 < 10) {
      iVar5 = 10;
    }
    *(byte *)(param_1 + 0x7b) = *(byte *)(param_1 + 0x7b) & 0xcf;
    *(char *)(param_1 + 0x128) = (char)iVar5;
    FUN_004ac5f0();
  }
  return;
}

