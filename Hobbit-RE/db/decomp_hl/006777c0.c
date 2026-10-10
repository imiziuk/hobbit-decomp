
undefined4 * __thiscall
FUN_006777c0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6cc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_audio_stream_mgr__AcquireStream_00752890);
  iVar5 = *(int *)(param_4 + 0x10);
  iVar1 = *(int *)(*(int *)(iVar5 + 0x8c) + 0x14);
  puVar6 = (undefined4 *)0x0;
  bVar3 = false;
  local_4 = 0;
  local_18 = 0;
  if (iVar5 != 0) {
    local_18 = *(int *)(iVar5 + 8);
  }
  iVar5 = 0;
  piVar4 = (int *)(param_1 + 0xc4);
  do {
    if (piVar4[-0x31] == 0) {
      iVar2 = *(int *)(piVar4[-1] + 0x28);
      bVar3 = true;
      if ((((iVar2 != 1) && (iVar2 != 2)) && (iVar2 != 3)) && (*piVar4 == 0)) {
        puVar6 = (undefined4 *)(iVar5 * 0x118 + param_1);
        if (puVar6 == (undefined4 *)0x0) goto LAB_0067793c;
        if (param_5 == 0) {
          *puVar6 = 1;
          if (iVar1 != 0) goto LAB_0067789c;
          puVar6[0x3e] = 0x9000;
        }
        else {
          *puVar6 = 2;
          if (iVar1 == 0) {
            puVar6[0x3e] = 0x12000;
          }
          else {
LAB_0067789c:
            if (iVar1 == 2) {
              puVar6[0x3e] = 0x4000;
            }
          }
        }
        puVar6[0x3f] = 0;
        puVar6[0x44] = 0;
        puVar6[0x42] = 0;
        puVar6[0x43] = 0;
        puVar6[1] = iVar1;
        puVar6[0x32] = param_2;
        puVar6[0x45] = 0;
        puVar6[0x41] = 0;
        puVar6[0x40] = 0;
        puVar6[0x2e] = 0;
        puVar6[0x31] = 0;
        puVar6[0x33] = param_3;
        puVar6[0x34] = 0;
        puVar6[0x35] = 0;
        puVar6[0x36] = param_4;
        puVar6[0x37] = param_5;
        goto LAB_0067793f;
      }
    }
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 0x46;
    if (6 < iVar5) {
      if (bVar3) {
LAB_0067793c:
        puVar6 = (undefined4 *)0xffffffff;
      }
      else {
        FUN_0064e7d0(s_AcquireStream__Failed_to_acquire_007528b0,*(undefined4 *)(local_18 + 0x1c));
      }
LAB_0067793f:
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = local_c;
      return puVar6;
    }
  } while( true );
}

