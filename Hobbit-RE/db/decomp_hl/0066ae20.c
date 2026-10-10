
void FUN_0066ae20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int local_cc;
  undefined1 local_c8 [4];
  int local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  undefined1 local_8c [12];
  char local_80 [128];
  
  FUN_0065fd00(0);
  pfVar2 = (float *)FUN_00673820(local_8c,param_1,0);
  local_c0 = *pfVar2;
  local_bc = pfVar2[1];
  local_b8 = pfVar2[2];
  FUN_006720e0(&local_a4,&local_ac,&local_98,&local_94);
  if (((((float)local_a4 <= local_c0) &&
       ((float)local_98 < local_c0 == (NAN((float)local_98) || NAN(local_c0)))) &&
      ((float)local_ac <= local_bc)) &&
     (((float)local_94 < local_bc == (NAN((float)local_94) || NAN(local_bc)) &&
      (local_b8 < DAT_006e92e4 == (NAN(local_b8) || NAN(DAT_006e92e4)))))) {
    thunk_FUN_006c2388(local_80,param_3,&stack0x00000010);
    local_cc = FUN_00647cf0(local_80);
    iVar7 = (int)(local_cc + (local_cc >> 0x1f & 0x1fU)) >> 5;
    if (iVar7 * 0x20 < local_cc) {
      iVar7 = iVar7 + 1;
    }
    iVar3 = 0;
    if (0 < local_cc) {
      do {
        if (local_80[iVar3] == '\n') {
          iVar7 = iVar7 + 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_cc);
    }
    local_a0 = local_cc;
    FUN_0067d0f0(local_c8,local_c8,local_c8,local_c8,&local_90,&local_b4,local_c8);
    local_9c = -((local_b4 * iVar7) / 2);
    FUN_0067d850(param_2);
    local_c4 = __ftol();
    iVar7 = 0;
    if (0 < local_cc) {
      do {
        iVar6 = 0;
        local_b0 = 0;
        iVar3 = local_cc;
        if (0x1f < local_cc) {
          iVar3 = 0x20;
        }
        iVar4 = iVar7;
        if (iVar7 < iVar3 + iVar7) {
          do {
            if (local_80[iVar4] == '\n') {
              local_b0 = 1;
              iVar3 = iVar6;
            }
            iVar4 = iVar4 + 1;
            iVar6 = iVar6 + 1;
          } while (iVar4 < iVar3 + iVar7);
        }
        local_a8 = (iVar3 * local_90) / 2;
        iVar6 = iVar3 + iVar7;
        cVar1 = local_80[iVar6];
        local_80[iVar6] = '\0';
        uVar5 = __ftol(local_c4 + local_9c);
        FUN_0067d360(local_80 + iVar7,uVar5);
        local_cc = local_cc - iVar3;
        local_80[iVar6] = cVar1;
        if (local_b0 != 0) {
          iVar6 = iVar6 + 1;
          local_cc = local_cc + -1;
        }
        local_c4 = local_c4 + local_b4;
        iVar7 = iVar6;
      } while (iVar6 < local_a0);
    }
    FUN_0067d890();
    return;
  }
  return;
}

