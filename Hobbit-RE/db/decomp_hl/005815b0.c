
void __thiscall FUN_005815b0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc0b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_npc_ri__RenderTask_0074060c);
  local_4 = 0;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 8) == 0x1000) {
      if ((DAT_007ba9d4 == '\0') && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
        (**(code **)(**(int **)(param_1 + 0x10) + 0x150))();
      }
    }
    else {
      iVar2 = FUN_00549470(param_1 + 0x14);
      if (iVar2 != 0) {
        uVar1 = *(undefined4 *)(param_2 + 8);
        if (*(int *)(iVar2 + 0xb0) == 0) {
          FUN_005b74e0(iVar2,uVar1);
        }
        else {
          FUN_005b77a0(iVar2,uVar1);
        }
        if (*(int *)(iVar2 + 0xb0) == 0) {
          thunk_FUN_005b7f00(iVar2,uVar1);
        }
        else {
          FUN_005b7f00(iVar2,uVar1);
        }
        if (DAT_007ba9cc == DAT_007ba9d0 + -1) {
          if (*(int *)(iVar2 + 0xb0) == 0) {
            FUN_005b7790(iVar2,uVar1);
          }
          else {
            FUN_005b7790(iVar2,uVar1);
          }
        }
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

