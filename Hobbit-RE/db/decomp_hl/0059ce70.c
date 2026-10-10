
void __fastcall FUN_0059ce70(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd7b0;
  local_c = ExceptionList;
  iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x5c);
  if ((*(int *)(param_1 + 0x30) < iVar5) && (0 < iVar5)) {
    puVar1 = *(uint **)(*(int *)(*(int *)(param_1 + 0x1c) + 0x60) + *(int *)(param_1 + 0x30) * 4);
    if (((int)puVar1[0xf] < (int)*(uint *)(param_1 + 0x28)) ||
       ((puVar1[0xf] == *(uint *)(param_1 + 0x28) &&
        ((float)puVar1[0xe] < *(float *)(param_1 + 0x38) !=
         ((float)puVar1[0xe] == *(float *)(param_1 + 0x38)))))) {
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      ExceptionList = &local_c;
      FUN_00649600();
      iVar4 = (int)*(short *)(&DAT_0076cd88 + ((uVar2 ^ uVar3) * -0xfb & 0xfff) * 2);
      for (iVar5 = iVar4; iVar5 != -1; iVar5 = (int)*(short *)(DAT_0076f648 + iVar5 * 0x14 + 0xe)) {
      }
      for (; iVar4 != -1; iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe)) {
        iVar5 = *(int *)(DAT_0076f648 + iVar4 * 0x14);
        if (((iVar5 != 0) && (*(uint *)(iVar5 + 8) == uVar2)) && (*(uint *)(iVar5 + 0xc) == uVar3))
        {
          if (iVar4 != -1) {
            uVar2 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
            piVar7 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
            local_4 = 0xffffffff;
            FUN_00649720();
            if (piVar7 != (int *)0x0) {
              FUN_00649b20();
              local_4 = 1;
              FUN_005a2a10();
              piVar6 = (int *)FUN_005a2a10();
              FUN_00649b60(*piVar6 + 0xc);
              local_4 = 0xffffffff;
              (**(code **)(*piVar7 + 0x114))();
            }
            goto LAB_0059cff6;
          }
          break;
        }
      }
      local_4 = 0xffffffff;
      FUN_00649720();
LAB_0059cff6:
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    }
  }
  ExceptionList = local_c;
  return;
}

