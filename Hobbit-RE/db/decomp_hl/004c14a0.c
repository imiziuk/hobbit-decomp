
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004c14a0(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int local_4c;
  int *local_48;
  uint local_44;
  float local_40;
  undefined4 local_38;
  float fStack_34;
  undefined4 uStack_30;
  int local_24;
  float local_20;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d47a0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_48 = param_1;
  FUN_00649600(s_rigid_instance__AdvanceFloat_0072ca90);
  local_4 = 0;
  if ((short)param_1[0x56] < 0) {
    local_24 = param_1[0x11];
    local_20 = (float)param_1[0x12];
    local_1c = param_1[0x13];
    FUN_004357e0(param_1 + 0x14);
    local_20 = local_20 - _DAT_006ede90;
    FUN_0054d4f0(&local_4c,0xffffffff,0x40000,&local_24);
    if (local_4c == -1) {
      FUN_0064e7d0(s_WARNING__RI_set_to_float__but_wa_0072c9fc);
    }
    else {
      FUN_00588ff0(local_4c);
      iVar2 = FUN_00589010(local_4c,&local_44);
      uVar5 = local_44;
      fVar1 = local_40;
      while (local_40 = fVar1, iVar2 != 0) {
        local_44 = uVar5;
        FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
        local_4._0_1_ = 1;
        iVar2 = FUN_00406ce0(uVar5,fVar1);
        local_4 = (uint)local_4._1_3_ << 8;
        if (iVar2 == -1) {
          FUN_00649720();
          uVar5 = 0;
        }
        else {
          uVar5 = *(uint *)(DAT_0076f648 + iVar2 * 0x14);
          uVar5 = -(uint)((*(byte *)(uVar5 + 0x7f) & 0x10) != 0) & uVar5;
          FUN_00649720();
        }
        if (*(char *)(uVar5 + 0x7c) == '&') {
          if ((short)param_1[0x56] < 0) {
            iVar3 = (int)*(short *)(&DAT_0076cd88 +
                                   ((local_44 ^ (uint)local_40) * -0xfb & 0xfff) * 2);
            for (iVar2 = iVar3; iVar2 != -1;
                iVar2 = (int)*(short *)(DAT_0076f648 + iVar2 * 0x14 + 0xe)) {
            }
            for (; iVar3 != -1; iVar3 = (int)*(short *)(DAT_0076f648 + iVar3 * 0x14 + 0xe)) {
              iVar2 = *(int *)(DAT_0076f648 + iVar3 * 0x14);
              if (((iVar2 != 0) && (*(uint *)(iVar2 + 8) == local_44)) &&
                 (*(float *)(iVar2 + 0xc) == local_40)) break;
            }
            *(short *)(local_48 + 0x56) = (short)iVar3;
            param_1 = local_48;
          }
          else {
            FUN_0064e7d0(s_WARNING__RI_set_to_float__but_mu_0072ca38);
          }
        }
        iVar2 = FUN_00589010(local_4c,&local_44);
        uVar5 = local_44;
        fVar1 = local_40;
      }
      FUN_00588b20(local_4c);
    }
  }
  if (-1 < (short)param_1[0x56]) {
    FUN_004e8ac0(param_1 + 5,&local_44,&local_24);
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x28))();
    local_38 = *puVar4;
    local_48 = (int *)(int)(char)param_1[0x57];
    uStack_30 = puVar4[2];
    fStack_34 = (float)(int)local_48 + local_40;
    (**(code **)(*param_1 + 0x110))(&local_38,param_1 + 0x1a);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

