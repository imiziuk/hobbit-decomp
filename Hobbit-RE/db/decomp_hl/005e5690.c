
void __thiscall FUN_005e5690(int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int local_a0;
  undefined4 local_9c;
  undefined1 local_98 [4];
  int local_94;
  void *local_90;
  undefined1 local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e17cf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_94 = param_1;
  FUN_005cc820(param_2);
  if (DAT_00798540 == 0) {
    FUN_00649920(local_98,s_AIManager_Actions_Action__d_Fade_00747880,*(undefined4 *)(param_1 + 4));
    local_4 = 0;
    local_9c = FUN_00649940();
    if (DAT_0075d338 == 0) {
      local_a0 = *(int *)(param_2 + 8);
      if (*(int *)(param_2 + 0x10) < local_a0 + 1) {
        if (*(int *)(param_2 + 0x18) == 0) {
          iVar1 = *(int *)(param_2 + 0x10) / 2;
          iVar4 = 1;
          if (0 < iVar1) {
            iVar4 = iVar1;
          }
          if (iVar4 + local_a0 < 1) {
            local_a0 = 1;
          }
          else {
            if (iVar1 < 1) {
              iVar1 = 1;
            }
            local_a0 = local_a0 + iVar1;
          }
        }
        else {
          local_a0 = *(int *)(param_2 + 0x18) + local_a0;
        }
        pvVar2 = operator_new(local_a0 * 0x108);
        local_4._0_1_ = 1;
        local_90 = pvVar2;
        if (pvVar2 == (void *)0x0) {
          pvVar2 = (void *)0x0;
        }
        else {
          FUN_00401080(pvVar2,0x108,local_a0,FUN_00480d70);
        }
        iVar4 = 0;
        local_4 = (uint)local_4._1_3_ << 8;
        if (0 < *(int *)(param_2 + 8)) {
          iVar1 = 0;
          do {
            FUN_00437630(*(int *)(param_2 + 0xc) + iVar1);
            iVar4 = iVar4 + 1;
            iVar1 = iVar1 + 0x108;
          } while (iVar4 < *(int *)(param_2 + 8));
        }
        FUN_006bf840(*(undefined4 *)(param_2 + 0xc));
        *(void **)(param_2 + 0xc) = pvVar2;
        *(int *)(param_2 + 0x10) = local_a0;
        param_1 = local_94;
      }
      iVar4 = *(int *)(param_2 + 8) + 1;
      *(int *)(param_2 + 8) = iVar4;
      iVar4 = iVar4 * 0x108 + -0x108 + *(int *)(param_2 + 0xc);
      *(undefined4 *)(iVar4 + 0x80) = 3;
      FUN_00647d10(iVar4,local_9c);
      *(undefined4 *)(iVar4 + 0x84) = 0;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(local_98,s_AIManager_Actions_Action__d_Colo_0074785c,*(undefined4 *)(param_1 + 4));
    local_4 = 2;
    uVar3 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar4 = FUN_00425010();
      FUN_00647d10(iVar4,uVar3);
      *(undefined4 *)(iVar4 + 0x80) = 0x11;
      *(undefined4 *)(iVar4 + 0x84) = 1;
      FUN_00647d10(local_8c,uVar3);
      FUN_00647dc0(local_8c,&DAT_00728244);
      if (DAT_0075d338 == 0) {
        iVar4 = FUN_00425010();
        *(undefined4 *)(iVar4 + 0x80) = 1;
        FUN_00647d10(iVar4,local_8c);
        *(undefined4 *)(iVar4 + 0x84) = 0x10;
        *(undefined4 *)(iVar4 + 0xf0) = 0;
        *(undefined4 *)(iVar4 + 0xf4) = 0xff;
      }
      FUN_00647d10(local_8c,uVar3);
      FUN_00647dc0(local_8c,&DAT_00728240);
      FUN_00499e60(param_2,local_8c,0x10,0,0xff);
      FUN_00647d10(local_8c,uVar3);
      FUN_00647dc0(local_8c,&DAT_0072823c);
      FUN_00499e60(param_2,local_8c,0x10,0,0xff);
      FUN_00647d10(local_8c,uVar3);
      FUN_00647dc0(local_8c,&DAT_00728238);
      FUN_00499e60(param_2,local_8c,0x10,0,0xff);
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(&local_9c,s_AIManager_Actions_Action__d_Dura_00747834,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 3;
    uVar3 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar4 = FUN_00425010();
      *(undefined4 *)(iVar4 + 0x80) = 2;
      FUN_00647d10(iVar4,uVar3);
      *(undefined4 *)(iVar4 + 0x84) = 0;
      *(undefined4 *)(iVar4 + 0xf8) = 0x800000;
      *(undefined4 *)(iVar4 + 0xfc) = 0x7f7fffff;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
  }
  ExceptionList = local_c;
  return;
}

