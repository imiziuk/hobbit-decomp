
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0047e120(int param_1,float param_2,int param_3,int *param_4)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  fVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d24c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(&param_2,s__s_Character_00728668,param_2);
  local_4 = 0;
  uVar5 = FUN_00649940();
  iVar3 = param_3;
  iVar6 = FUN_00647e40(param_3,uVar5);
  piVar4 = param_4;
  if ((iVar6 == 0) && ((*param_4 == 0xf || (*param_4 == 0x10)))) {
    *(int *)(param_1 + 0x20) = param_4[0x90];
    *(int *)(param_1 + 0x24) = param_4[0x91];
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  if (bVar1) {
    uVar5 = 1;
  }
  else {
    FUN_00649920(&param_2,s__s_Animation_Name_00728654,fVar2);
    bVar1 = true;
    local_4 = 1;
    uVar5 = FUN_00649940();
    iVar6 = FUN_00647e40(iVar3,uVar5);
    if ((iVar6 == 0) && (((iVar6 = *piVar4, iVar6 == 0xd || (iVar6 == 4)) || (iVar6 == 0xe)))) {
      FUN_0064a2e0(piVar4 + 2);
    }
    else {
      bVar1 = false;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    if (bVar1) {
      uVar5 = 1;
    }
    else {
      FUN_00649920(&param_2,s__s_NumberOfAnimsToRun_0072863c,fVar2);
      local_4 = 2;
      uVar5 = FUN_00649940();
      iVar6 = FUN_00647e40(iVar3,uVar5);
      if ((iVar6 == 0) && (*piVar4 == 1)) {
        param_3 = piVar4[0x93];
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      if (bVar1) {
        *(int *)(param_1 + 100) = param_3;
        uVar5 = 1;
      }
      else {
        FUN_00649920(&param_2,s__s_Length_00728630,fVar2);
        local_4 = 3;
        uVar5 = FUN_00649940();
        iVar6 = FUN_00647e40(iVar3,uVar5);
        if ((iVar6 == 0) && (*piVar4 == 2)) {
          *(int *)(param_1 + 0x60) = piVar4[0x94];
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        local_4 = 0xffffffff;
        FUN_00649950();
        if (bVar1) {
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x60);
          uVar5 = 1;
        }
        else {
          FUN_00649920(&param_3,s__s_Duration_00727bbc,fVar2);
          local_4 = 4;
          uVar5 = FUN_00649940();
          iVar6 = FUN_00647e40(iVar3,uVar5);
          if ((iVar6 == 0) && (*piVar4 == 2)) {
            param_2 = (float)piVar4[0x94];
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          local_4 = 0xffffffff;
          FUN_00649950();
          if (bVar1) {
            if ((NAN(param_2) || NAN(DAT_006e92e4)) == (param_2 == DAT_006e92e4)) {
              *(float *)(param_1 + 8) = param_2;
            }
            fVar2 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x18);
            *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 8);
            if (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4))) {
              fVar2 = -fVar2;
            }
            if (fVar2 < _DAT_006e9360 != (NAN(fVar2) || NAN(_DAT_006e9360))) {
              *(undefined4 *)(param_1 + 0x5c) = 0;
            }
            uVar5 = 1;
          }
          else {
            FUN_00649920(&param_2,s__s_Animation_Resource_00728618,fVar2);
            local_4 = 5;
            uVar5 = FUN_00649940();
            iVar6 = FUN_00647e40(iVar3,uVar5);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar6 == 0) {
              if ((*piVar4 == 4) || (*piVar4 == 7)) {
                FUN_0047f470(piVar4 + 2);
                FUN_0047f020();
                uVar5 = 1;
              }
              else {
                uVar5 = 0;
              }
            }
            else {
              FUN_00649920(&param_2,s__s_AnimatedInPlace_00728604,fVar2);
              local_4 = 6;
              uVar5 = FUN_00649940();
              iVar6 = FUN_00647e40(iVar3,uVar5);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar6 == 0) {
                if (*piVar4 == 3) {
                  *(int *)(param_1 + 0x58) = piVar4[0x95];
                  uVar5 = 1;
                }
                else {
                  uVar5 = 0;
                }
              }
              else {
                FUN_00649920(&param_4,s__s_Loops_007285f8,fVar2);
                local_4 = 7;
                uVar5 = FUN_00649940();
                iVar6 = FUN_00647e40(iVar3,uVar5);
                local_4 = 0xffffffff;
                FUN_00649950();
                if (iVar6 == 0) {
                  if (*piVar4 == 3) {
                    *(int *)(param_1 + 0x5c) = piVar4[0x95];
                    uVar5 = 1;
                  }
                  else {
                    uVar5 = 0;
                  }
                }
                else {
                  uVar5 = FUN_00474b30(fVar2,iVar3,piVar4);
                }
              }
            }
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return uVar5;
}

