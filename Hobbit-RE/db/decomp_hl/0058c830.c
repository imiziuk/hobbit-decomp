
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0058c830(int param_1,float *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_54;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38 [5];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dcc00;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_poly_cache__InvalidateCells_00742190);
  local_24 = *param_2 - _DAT_006e999c;
  local_20 = param_2[1] - _DAT_006e999c;
  local_1c = param_2[2] - _DAT_006e999c;
  local_18 = param_2[3] + _DAT_006e999c;
  local_14 = param_2[4] + _DAT_006e999c;
  local_4 = 0;
  local_10 = param_2[5] + _DAT_006e999c;
  FUN_0058ce30(&local_24,&local_3c,local_38,&local_44,&local_40,&local_48,&local_4c);
  local_54 = local_3c;
  iVar3 = local_44;
  iVar4 = local_4c;
  iVar7 = local_48;
  if (local_3c <= local_40) {
    do {
      param_2 = (float *)local_38[0];
      if (local_38[0] <= iVar7) {
        do {
          iVar8 = iVar3;
          if (iVar3 <= iVar4) {
            do {
              iVar3 = FUN_0058cde0(local_54,param_2,iVar8);
              if (iVar3 == 0) {
                *(int *)(param_1 + 0x1c814) = *(int *)(param_1 + 0x1c814) + 1;
              }
              else {
                FUN_0058ccb0(iVar3);
                *(int *)(param_1 + 0x1c818) = *(int *)(param_1 + 0x1c818) + 1;
                if (DAT_00797c5c != 0) {
                  uVar1 = *param_3;
                  uVar2 = param_3[1];
                  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
                  iVar4 = (int)*(short *)(&DAT_0076cd88 + ((uVar1 ^ uVar2) * -0xfb & 0xfff) * 2);
                  for (iVar3 = iVar4; iVar3 != -1;
                      iVar3 = (int)*(short *)(DAT_0076f648 + iVar3 * 0x14 + 0xe)) {
                  }
                  if (iVar4 == -1) {
LAB_0058ca11:
                    local_4 = (uint)local_4._1_3_ << 8;
                    FUN_00649720();
                  }
                  else {
                    do {
                      iVar3 = *(int *)(DAT_0076f648 + iVar4 * 0x14);
                      if (((iVar3 != 0) && (*(uint *)(iVar3 + 8) == uVar1)) &&
                         (*(uint *)(iVar3 + 0xc) == uVar2)) {
                        if (iVar4 == -1) goto LAB_0058ca11;
                        uVar1 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
                        local_4 = (uint)local_4._1_3_ << 8;
                        piVar6 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
                        FUN_00649720();
                        if (piVar6 != (int *)0x0) {
                          uVar5 = (**(code **)(*piVar6 + 0x4c))();
                          uVar5 = FUN_004aaa70(uVar5);
                          FUN_0064e7d0(s_PolyCache_Invalidate_Hit____s____00742168,uVar5);
                        }
                        goto LAB_0058ca68;
                      }
                      iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe);
                    } while (iVar4 != -1);
                    local_4 = (uint)local_4._1_3_ << 8;
                    FUN_00649720();
                  }
                }
              }
LAB_0058ca68:
              iVar8 = iVar8 + 1;
              iVar3 = local_44;
              iVar4 = local_4c;
              iVar7 = local_48;
            } while (iVar8 <= local_4c);
          }
          param_2 = (float *)((int)param_2 + 1);
        } while ((int)param_2 <= iVar7);
      }
      local_54 = local_54 + 1;
    } while (local_54 <= local_40);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

