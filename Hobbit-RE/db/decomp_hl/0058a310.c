
ushort __thiscall
FUN_0058a310(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dcb08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_sdbase__AllocCell_00741f20);
  iVar5 = *(int *)(param_1 + 0x204);
  piVar1 = (int *)(param_5 * 0xfb8 + 0x41c + param_1);
  local_4 = 0;
  if (*(int *)(param_1 + 0x200) == iVar5 << 9) {
    uVar4 = thunk_FUN_0064ff70(0x3800,s_C__projects_meridian_Support_Spa_00741e98,0x121);
    *(undefined4 *)(param_1 + iVar5 * 4) = uVar4;
    *(int *)(param_1 + 0x204) = *(int *)(param_1 + 0x204) + 1;
    FUN_00648600(*(undefined4 *)(param_1 + iVar5 * 4),0,0x3800);
    iVar5 = *(int *)(param_1 + 0x204) * 0x200;
    uVar6 = iVar5 - 1;
    if (iVar5 + -0x200 <= (int)uVar6) {
      do {
        iVar5 = 0;
        if ((short)uVar6 != -1) {
          iVar5 = (uVar6 & 0x1ff) * 0x1c + *(int *)(param_1 + ((uVar6 & 0xffff) >> 9) * 4);
        }
        *(undefined2 *)(iVar5 + 0xe) = 0xffff;
        *(undefined2 *)(iVar5 + 4) = *(undefined2 *)(param_1 + 0x208);
        *(short *)(param_1 + 0x208) = (short)uVar6;
        uVar6 = uVar6 - 1;
      } while (*(int *)(param_1 + 0x204) * 0x200 + -0x200 <= (int)uVar6);
    }
  }
  *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + 1;
  *piVar1 = *piVar1 + 1;
  uVar3 = *(ushort *)(param_1 + 0x208);
  puVar7 = (undefined4 *)0x0;
  if (uVar3 != 0xffff) {
    puVar7 = (undefined4 *)((uVar3 & 0x1ff) * 0x1c + *(int *)(param_1 + (uint)(uVar3 >> 9) * 4));
  }
  *(undefined2 *)(param_1 + 0x208) = *(undefined2 *)(puVar7 + 1);
  *(short *)(puVar7 + 4) = (short)param_5;
  *puVar7 = 0;
  *(undefined2 *)((int)puVar7 + 0xe) = 0;
  *(short *)(puVar7 + 2) = (short)param_2;
  *(short *)((int)puVar7 + 10) = (short)param_3;
  *(short *)(puVar7 + 3) = (short)param_4;
  *(undefined4 *)((int)puVar7 + 0x12) = 0xffffffff;
  *(undefined4 *)((int)puVar7 + 0x16) = 0xffffffff;
  if (param_6 == 0) {
    *(ushort *)(puVar7 + 1) = uVar3;
    *(ushort *)((int)puVar7 + 6) = uVar3;
  }
  else {
    uVar6 = (uint)(((param_2 * 0x400 + param_3) * 0x400 + param_4) * 0x400) % 0x7d1;
    uVar2 = *(ushort *)((int)piVar1 + uVar6 * 2 + 0x14);
    if (uVar2 != 0xffff) {
      *(ushort *)((uVar2 & 0x1ff) * 0x1c + *(int *)(param_1 + (uint)(uVar2 >> 9) * 4) + 6) = uVar3;
    }
    *(undefined2 *)(puVar7 + 1) = *(undefined2 *)((int)piVar1 + uVar6 * 2 + 0x14);
    *(undefined2 *)((int)puVar7 + 6) = 0xffff;
    *(ushort *)((int)piVar1 + uVar6 * 2 + 0x14) = uVar3;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return uVar3;
}

