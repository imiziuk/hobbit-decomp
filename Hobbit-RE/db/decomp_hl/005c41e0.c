
void __thiscall FUN_005c41e0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df608;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_render_task_mgr__RenderFromTaskL_0074602c);
  local_4 = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  if (param_2 != (int *)0x0) {
    do {
      iVar1 = *param_2;
      if ((iVar1 < 0) || (*(int *)(param_1 + 0x2c) <= iVar1)) {
        (**(code **)(*(int *)param_2[1] + 0xc))(param_2);
        (**(code **)(*(int *)param_2[1] + 0x10))(param_2);
LAB_005c42e2:
        FUN_00554760();
      }
      else {
        iVar2 = FUN_00553810(iVar1);
        if (*(int *)(&DAT_00745d98 + *(int *)(iVar2 + 0x104) * 4) != 0) {
          (**(code **)(*(int *)param_2[1] + 0xc))(param_2);
          FUN_00582a70(*(uint *)(param_2[1] + 4) & 0xffffff01,
                       *(uint *)(param_2[1] + 4) >> 1 & 0xffffff01);
          FUN_005c4320(param_2);
          FUN_00662c20();
          uVar3 = FUN_00553c50(iVar1);
          *(undefined4 *)(param_1 + 0x70) = uVar3;
          (**(code **)(*(int *)param_2[1] + 0x10))(param_2);
          *(undefined4 *)(param_1 + 0x6c) = 0;
          if (0 < *(int *)(param_1 + 0x70)) {
            do {
              FUN_00553fa0(iVar1,*(undefined4 *)(param_1 + 0x6c),0,0);
              FUN_00662c60();
              iVar2 = *(int *)(param_1 + 0x6c) + 1;
              *(int *)(param_1 + 0x6c) = iVar2;
            } while (iVar2 < *(int *)(param_1 + 0x70));
          }
          goto LAB_005c42e2;
        }
      }
      param_2 = (int *)param_2[3];
    } while (param_2 != (int *)0x0);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

