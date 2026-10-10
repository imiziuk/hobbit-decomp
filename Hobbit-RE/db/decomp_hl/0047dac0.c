
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0047dac0(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2448;
  local_c = ExceptionList;
  uVar1 = *(uint *)(param_1 + 0x24);
  uVar2 = *(uint *)(param_1 + 0x20);
  ExceptionList = &local_c;
  FUN_00649600();
  iVar3 = (int)*(short *)(&DAT_0076cd88 + ((uVar2 ^ uVar1) * -0xfb & 0xfff) * 2);
  for (iVar4 = iVar3; iVar4 != -1; iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe)) {
  }
  do {
    if (iVar3 == -1) {
LAB_0047db6c:
      local_4 = 0xffffffff;
      FUN_00649720();
LAB_0047db7d:
      FUN_0064e870();
LAB_0047db8c:
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
      ExceptionList = local_c;
      return;
    }
    piVar5 = (int *)(DAT_0076f648 + iVar3 * 0x14);
    iVar4 = *piVar5;
    if (((iVar4 != 0) && (*(uint *)(iVar4 + 8) == uVar2)) && (*(uint *)(iVar4 + 0xc) == uVar1)) {
      if (iVar3 != -1) {
        uVar1 = *(uint *)(DAT_0076f648 + iVar3 * 0x14);
        piVar5 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
        local_4 = 0xffffffff;
        FUN_00649720();
        if (piVar5 == (int *)0x0) goto LAB_0047db7d;
        if ((char)piVar5[0x1f] == '\x12') {
          FUN_0047f440();
          FUN_00649b20();
          local_4 = 1;
          FUN_00649b60(param_2);
          local_4 = 0xffffffff;
          (**(code **)(*piVar5 + 0x114))();
          fVar6 = (float10)FUN_0047f490();
          *(float *)(param_1 + 0x70) = (float)fVar6;
        }
        else {
          FUN_0047f440();
          FUN_00649b20();
          local_4 = 2;
          FUN_00649b60(param_2);
          local_4 = 0xffffffff;
          (**(code **)(*piVar5 + 0x114))();
          fVar6 = (float10)FUN_0047f490();
          *(float *)(param_1 + 0x70) = (float)fVar6;
        }
        goto LAB_0047db8c;
      }
      goto LAB_0047db6c;
    }
    iVar3 = (int)*(short *)((int)piVar5 + 0xe);
  } while( true );
}

