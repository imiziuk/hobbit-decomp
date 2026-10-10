
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00572ce0(int param_1,float param_2,undefined4 param_3,undefined4 param_4,float param_5,
            float param_6,float param_7,float param_8,undefined4 param_9,float param_10)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float *pfVar9;
  int iVar10;
  longlong lVar11;
  undefined4 uVar12;
  float fVar13;
  int local_40;
  int local_3c;
  undefined1 local_38 [44];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db7f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649b20(param_2);
  cVar5 = '\0';
  local_4 = 0;
  FUN_00649d10();
  FUN_00577160(&param_2,local_38);
  if ((param_2 == (float)*(int *)(param_1 + 0x58)) ||
     (iVar6 = FUN_0064a9c0(local_38,(int)param_2 + 0xc), iVar6 != 0)) {
    local_3c = *(int *)(param_1 + 0x58);
    piVar8 = &local_3c;
  }
  else {
    piVar8 = (int *)&param_2;
  }
  if (*piVar8 == *(int *)(param_1 + 0x58)) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*piVar8 + 0x38);
  }
  iVar10 = 0;
  param_2 = 100.0;
  if (iVar6 == 0) {
    _DAT_00772c2c = param_7;
    _DAT_00772cd0 = 1;
    _DAT_00772c24 = param_5;
    _DAT_00772c28 = param_6;
    local_3c = 5000;
    local_40 = 5000;
  }
  else {
    _DAT_00772cd0 = 0;
    uVar1 = *(uint *)(iVar6 + 0x40);
    local_3c = *(int *)(iVar6 + 0x2c);
    local_40 = *(int *)(iVar6 + 0x30);
    iVar10 = (int)(uVar1 << 0x18) >> 0x1f;
    if ((uVar1 & 1) != 0) {
      param_2 = 500.0;
    }
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x20) == 0) {
        if ((uVar1 & 0x40) == 0) {
          if ((uVar1 & 0x10) == 0) {
            if ((uVar1 & 8) == 0) {
              iVar7 = FUN_00647ed0(*(undefined4 *)(iVar6 + 0x70),s_Projectile_0072be40);
              if ((iVar7 == 0) && (lVar11 = FUN_0041bcd0(), lVar11 == CONCAT44(param_4,param_3))) {
                cVar5 = '\x03';
              }
            }
            else {
              cVar5 = '\x12';
            }
          }
          else {
            cVar5 = '\x13';
          }
        }
        else {
          cVar5 = (-((uVar1 & 2) != 0) & 3U) + 2;
        }
      }
      else {
        cVar5 = (-((uVar1 & 2) != 0) & 3U) + 1;
      }
    }
    else {
      cVar5 = '\n';
    }
  }
  fVar4 = param_10;
  FUN_0054d020(param_3,param_4,&param_5,param_8,(float)local_3c,(float)local_40,param_2,param_9,
               cVar5,param_10,iVar10);
  if (cVar5 == '\x14') {
    piVar8 = (int *)FUN_0041bcc0();
    pfVar9 = (float *)(**(code **)(*piVar8 + 0x28))();
    fVar13 = (pfVar9[2] - param_7) * (pfVar9[2] - param_7) +
             (*pfVar9 - param_5) * (*pfVar9 - param_5) +
             (pfVar9[1] - param_6) * (pfVar9[1] - param_6);
    fVar3 = param_8 * _DAT_006e958c;
    param_10 = param_8 * _DAT_006e99b0;
    fVar2 = (fVar3 - SQRT(fVar13)) / param_10;
    if ((fVar2 < DAT_006e92e8 == (NAN(fVar2) || NAN(DAT_006e92e8))) ||
       (DAT_006e92e4 <= (fVar3 - SQRT(fVar13)) / param_10)) {
      fVar2 = (fVar3 - SQRT(fVar13)) / param_10;
      if (fVar2 < DAT_006e92e8 == (NAN(fVar2) || NAN(DAT_006e92e8))) {
        param_2 = 1.0;
      }
      else {
        param_2 = (fVar3 - SQRT(fVar13)) / param_10;
      }
    }
    else {
      param_2 = 0.0;
    }
    uVar12 = 0x13;
    fVar13 = param_2;
    FUN_0041bcc0(0x13,param_2);
    FUN_0044c120(uVar12,fVar13);
  }
  if (((iVar6 != 0) && (0 < *(int *)(iVar6 + 0x34))) &&
     (param_2 = (float)FUN_00647b10(0,100), (float10)*(int *)(iVar6 + 0x3c) <= (float10)(int)param_2
     )) {
    param_2 = (float)*(int *)(iVar6 + 0x38);
    local_3c = *(int *)(iVar6 + 0x34);
    FUN_0054d020(param_3,param_4,&param_5,param_8,(float)local_3c,(float)local_3c,param_2,param_9,
                 0xf,fVar4,iVar10);
  }
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = pvStack_c;
  return;
}

