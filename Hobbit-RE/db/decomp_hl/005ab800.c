
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_005ab800(int param_1,undefined4 param_2,undefined4 param_3,float param_4,int param_5)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  float *pfVar7;
  int *piVar8;
  float10 fVar9;
  longlong lVar10;
  float local_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006ddff0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_SenseController__CanSee_007449e8);
  local_4 = 0;
  FUN_005aa750();
  iVar4 = FUN_004a1060();
  if ((iVar4 != 0) && (iVar4 = FUN_005aa750(), *(int *)(iVar4 + 0x244) != 0)) {
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 1;
    iVar4 = FUN_00406ce0(param_2,param_3);
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar4 == -1) {
      FUN_00649720();
    }
    else {
      uVar1 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
      piVar8 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
      FUN_00649720();
      if ((piVar8 != (int *)0x0) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
        uVar1 = piVar8[4];
        if ((param_4 != 0.0) && ((uVar1 & 0x50) != 0)) {
          piVar5 = piVar8;
          FUN_005aa750(piVar8);
          iVar4 = FUN_004683d0(piVar5);
          if (iVar4 == 0) goto LAB_005abcb0;
        }
        if ((((char)piVar8[0x1f] != '/') &&
            (((uVar1 & 0x50) == 0 || (iVar4 = (**(code **)(*piVar8 + 0x108))(1), iVar4 != 0)))) &&
           (((char)piVar8[0x1f] != '\x1c' || (iVar4 = FUN_004a1090(), iVar4 != 0)))) {
          piVar5 = (int *)FUN_005aa750();
          pfVar6 = (float *)(**(code **)(*piVar5 + 0x28))();
          pfVar7 = (float *)(**(code **)(*piVar8 + 0x28))();
          fVar2 = (pfVar7[2] - pfVar6[2]) * (pfVar7[2] - pfVar6[2]) +
                  (pfVar7[1] - pfVar6[1]) * (pfVar7[1] - pfVar6[1]) +
                  (*pfVar7 - *pfVar6) * (*pfVar7 - *pfVar6);
          if (fVar2 <= *(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x1c)) {
            if ((uVar1 & 0x10) == 0) {
              pfVar6 = &fStack_18;
              FUN_005aa750(pfVar6);
              pfVar6 = (float *)FUN_004a4190(pfVar6);
              fVar2 = SQRT(fVar2) *
                      SQRT(pfVar6[2] * pfVar6[2] + pfVar6[1] * pfVar6[1] + *pfVar6 * *pfVar6);
              if ((NAN(fVar2) || NAN(DAT_006e92e4)) == (fVar2 == DAT_006e92e4)) {
                fVar9 = (float10)FUN_006c0520();
                param_4 = (float)fVar9;
              }
              else {
                param_4 = 0.0;
              }
              iVar4 = FUN_005aa750();
              fVar2 = DAT_006e92e4;
              if (*(int *)(iVar4 + 0x1d8) == 0) {
                FUN_005aa750();
                iVar4 = FUN_00587ce0();
                fVar2 = DAT_006e92e4;
                if (iVar4 != 0xb) {
                  fVar2 = param_4;
                }
              }
              fVar3 = *(float *)(param_1 + 0x20) * _DAT_006e9368 * _DAT_006e957c * _DAT_006e936c;
              if (fVar2 < fVar3 == (fVar2 == fVar3)) goto LAB_005abcb0;
              if ((param_5 != 0) && ((*(byte *)(param_1 + 0x18) & 4) != 0)) {
                piVar5 = (int *)FUN_005aa750();
                pfVar6 = (float *)(**(code **)(*piVar5 + 0x38))();
                FUN_00401f00((*pfVar6 + pfVar6[3]) * _DAT_006e936c,
                             (pfVar6[4] + pfVar6[1]) * _DAT_006e936c,
                             (pfVar6[5] + pfVar6[2]) * _DAT_006e936c);
                pfVar6 = (float *)(**(code **)(*piVar8 + 0x38))();
                FUN_00401f00((*pfVar6 + pfVar6[3]) * _DAT_006e936c,
                             (pfVar6[4] + pfVar6[1]) * _DAT_006e936c,
                             (pfVar6[5] + pfVar6[2]) * _DAT_006e936c);
                pfVar6 = (float *)(**(code **)(*piVar8 + 0x28))();
                fStack_34 = fStack_28 + pfVar6[2];
                fStack_38 = fStack_2c + pfVar6[1];
                local_3c = fStack_30 + *pfVar6;
                piVar8 = (int *)FUN_005aa750();
                pfVar6 = (float *)(**(code **)(*piVar8 + 0x28))();
                fStack_10 = fStack_1c + pfVar6[2];
                fStack_14 = fStack_20 + pfVar6[1];
                fStack_18 = fStack_24 + *pfVar6;
                FUN_00579860(0,0,&fStack_18,&local_3c,0x9800);
                FUN_00579910(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
                FUN_005798f0(1);
                FUN_00577e70();
                if (0 < DAT_00773970) goto LAB_005abcb0;
              }
              lVar10 = FUN_0041bcd0();
              if (lVar10 == CONCAT44(param_3,param_2)) {
                piVar8 = (int *)FUN_0041bcc0();
                iVar4 = (**(code **)(*piVar8 + 0x124))();
                if (iVar4 != 0) {
                  FUN_0041bcc0();
                  FUN_00424bc0();
                }
              }
              lVar10 = FUN_0041bcd0();
              if (lVar10 == CONCAT44(param_3,param_2)) {
                piVar8 = (int *)FUN_0041bcc0();
                iVar4 = (**(code **)(*piVar8 + 0x124))();
                if ((iVar4 != 0) && (iVar4 = FUN_005aa750(), *(int *)(iVar4 + 0x23c) == 0))
                goto LAB_005abcb0;
              }
            }
            local_4 = 0xffffffff;
            FUN_00649720();
            ExceptionList = local_c;
            return 1;
          }
        }
      }
    }
  }
LAB_005abcb0:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 0;
}

