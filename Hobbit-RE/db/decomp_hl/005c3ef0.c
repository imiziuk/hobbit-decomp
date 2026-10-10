
void __thiscall FUN_005c3ef0(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int *piStack_64;
  int iStack_5c;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df5e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_render_task_mgr__RenderTasksFrom_00746000);
  iVar3 = (param_3 + param_2 * 9) * 4;
  iVar8 = *(int *)(iVar3 + *(int *)(param_1 + 0x30));
  local_4 = 0;
  if ((((iVar8 != 0) && (-1 < param_2)) && (param_2 < *(int *)(param_1 + 0x2c))) &&
     (iVar4 = FUN_00553810(param_2), *(int *)(&DAT_00745d98 + *(int *)(iVar4 + 0x104) * 4) != 0)) {
    iVar5 = 0;
    iVar4 = iVar8;
    do {
      iVar4 = *(int *)(iVar4 + 0xc);
      iVar5 = iVar5 + 1;
    } while (iVar4 != 0);
    *(int **)(&DAT_007f23e0 + DAT_007f23d4 * 4) = DAT_007f23cc;
    DAT_007f23d4 = DAT_007f23d4 + 1;
    piVar9 = (int *)((int)DAT_007f23cc + iVar5 * -0x10);
    iVar4 = 0;
    DAT_007f23cc = piVar9;
    do {
      iVar5 = iVar4;
      piVar9[iVar5] = iVar8;
      iVar8 = *(int *)(iVar8 + 0xc);
      iVar4 = iVar5 + 1;
    } while (iVar8 != 0);
    FUN_006c1382(piVar9,iVar4,4,&LAB_005c3e90);
    *(undefined1 *)(param_1 + 0x74) = 0;
    FUN_00582a70(param_3 & 0xffffff01,param_3 >> 1 & 0xffffff01);
    local_1c = 0;
    local_2c = 0;
    local_3c = 0;
    local_18 = 0;
    local_28 = 0;
    local_48 = 0;
    local_14 = 0;
    local_34 = 0;
    local_44 = 0;
    local_20 = 0;
    local_30 = 0;
    local_40 = 0;
    local_4c = 0x3f800000;
    local_38 = 0x3f800000;
    local_24 = 0x3f800000;
    local_10 = 0x3f800000;
    (**(code **)(*DAT_007f1000 + 0x94))(DAT_007f1000,0x100,&local_4c);
    bVar1 = true;
    iStack_5c = 0;
    if (0 < iVar4) {
      do {
        piStack_64 = piVar9 + 1;
        iVar8 = *piVar9;
        if (bVar1) {
          FUN_00662c20();
          bVar1 = false;
        }
        (**(code **)(**(int **)(iVar8 + 4) + 0xc))(iVar8);
        (**(code **)(**(int **)(iVar8 + 4) + 0x10))(iVar8);
        if (iStack_5c == iVar5) {
LAB_005c411a:
          iVar8 = FUN_00553c50(param_2);
          *(int *)(param_1 + 0x70) = iVar8;
          *(undefined4 *)(param_1 + 0x6c) = 0;
          if (0 < iVar8) {
            do {
              FUN_00553fa0(param_2,*(undefined4 *)(param_1 + 0x6c),0,0);
              FUN_00662c60();
              iVar8 = *(int *)(param_1 + 0x6c) + 1;
              *(int *)(param_1 + 0x6c) = iVar8;
            } while (iVar8 < *(int *)(param_1 + 0x70));
          }
          bVar1 = true;
        }
        else {
          uVar6 = (**(code **)(**(int **)(*piStack_64 + 4) + 0x20))(*piStack_64);
          uVar7 = (**(code **)(**(int **)(iVar8 + 4) + 0x20))(iVar8);
          cVar2 = FUN_00582170(uVar6);
          if ((cVar2 != '\0') || (cVar2 = FUN_00582170(uVar7), cVar2 != '\0')) goto LAB_005c411a;
        }
        iStack_5c = iStack_5c + 1;
        piVar9 = piStack_64;
      } while (iStack_5c < iVar4);
    }
    DAT_007f23cc = *(int **)(&DAT_007f23dc + DAT_007f23d4 * 4);
    DAT_007f23d4 = DAT_007f23d4 + -1;
    *(undefined4 *)(iVar3 + *(int *)(param_1 + 0x30)) = 0;
    FUN_00554760();
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

