
void __thiscall
FUN_00589f60(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ushort *puVar6;
  undefined2 *puVar7;
  int iVar8;
  int local_8c;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dcae8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600();
  iVar5 = 0;
  local_4 = 0;
  FUN_0066dac0();
  FUN_0066c3a0();
  FUN_0066ddd0();
  puVar6 = (ushort *)(param_3 * 0xfb8 + param_1 + 0x430);
  local_8c = 0x7d1;
  do {
    uVar1 = *puVar6;
    while (uVar1 != 0xffff) {
      if (uVar1 == 0xffff) {
        iVar8 = 0;
      }
      else {
        iVar8 = (uVar1 & 0x1ff) * 0x1c + *(int *)(param_1 + (uint)(uVar1 >> 9) * 4);
      }
      iVar3 = FUN_00673620();
      if (iVar3 != 0) {
        puVar7 = &DAT_00741e68;
        do {
          FUN_0066de80();
          puVar7 = puVar7 + 1;
        } while ((int)puVar7 < 0x741e98);
        iVar3 = 0;
        uVar1 = *(ushort *)(iVar8 + 0x12);
        while (uVar2 = (uint)uVar1, uVar2 != 0xffff) {
          iVar3 = iVar3 + 1;
          uVar1 = *(ushort *)
                   (*(int *)(param_1 + 0x20c + ((int)uVar2 >> 10) * 4) + (uVar2 & 0x3ff) * 0xc);
        }
        if (param_5 <= iVar3) {
          FUN_00406b70(0xffffffff);
          uVar4 = FUN_0045bbd0(local_18);
          FUN_0066ae20(uVar4);
        }
      }
      if (iVar5 <= *(short *)(iVar8 + 0xe)) {
        iVar5 = (int)*(short *)(iVar8 + 0xe);
      }
      uVar1 = *(ushort *)(iVar8 + 4);
    }
    puVar6 = puVar6 + 1;
    local_8c = local_8c + -1;
  } while (local_8c != 0);
  FUN_0066d9a0();
  FUN_0064f0d0(0x3c);
  FUN_0064f0d0(0x3c,param_3 * 5 + 0xb,s_MostLinkInACell___d_00741ee8,iVar5);
  FUN_0064f0d0(0x3c);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

