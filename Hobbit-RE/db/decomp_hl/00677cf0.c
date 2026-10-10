
void __fastcall FUN_00677cf0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined *puVar10;
  undefined *puVar11;
  char local_200 [64];
  char local_1c0 [64];
  undefined1 local_180 [64];
  undefined1 local_140 [64];
  undefined1 local_100 [64];
  undefined1 local_c0 [64];
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  uVar2 = __ftol();
  if (DAT_007f8ffc != 0) {
    uVar3 = __ftol();
    FUN_0064f0d0(0,4,s_Audio_Time___05d_03d_0075295c,uVar2,uVar3);
    iVar6 = 0;
    iVar7 = 5;
    do {
      piVar9 = (int *)(iVar6 * 0x118 + param_1);
      iVar8 = 0;
      if (*(int *)(iVar6 * 0x118 + 0xb8 + param_1) == 0) {
        puVar10 = &DAT_00752974;
      }
      else {
        puVar10 = &DAT_00752972;
      }
      FUN_00647d10(local_c0,puVar10);
      if ((piVar9[0x36] == 0) || (*piVar9 == 0)) {
        FUN_00647d10(local_80,&DAT_007529b8);
        iVar4 = 0;
        do {
          cVar1 = (&DAT_007529bc)[iVar4];
          local_200[iVar4] = cVar1;
          iVar4 = iVar4 + 1;
        } while (cVar1 != '\0');
      }
      else {
        iVar4 = FUN_0067b6c0();
        FUN_0064f190(local_80,&DAT_00752978,(piVar9[0x36] - iVar4) / 0x88);
        iVar4 = piVar9[0x36];
        switch(*(undefined4 *)(iVar4 + 0x54)) {
        case 0:
          iVar5 = 0;
          do {
            cVar1 = (&DAT_00752980)[iVar5];
            local_200[iVar5] = cVar1;
            iVar5 = iVar5 + 1;
          } while (cVar1 != '\0');
          break;
        case 1:
          iVar5 = 0;
          do {
            cVar1 = (&DAT_00752988)[iVar5];
            local_200[iVar5] = cVar1;
            iVar5 = iVar5 + 1;
          } while (cVar1 != '\0');
          break;
        case 2:
          iVar5 = 0;
          do {
            cVar1 = s_RUNNIN_00752998[iVar5];
            local_200[iVar5] = cVar1;
            iVar5 = iVar5 + 1;
          } while (cVar1 != '\0');
          break;
        case 3:
          iVar5 = 0;
          do {
            cVar1 = s_PAUSEN_007529a0[iVar5];
            local_200[iVar5] = cVar1;
            iVar5 = iVar5 + 1;
          } while (cVar1 != '\0');
          break;
        case 4:
          iVar5 = 0;
          do {
            cVar1 = s_PAUSED_007529a8[iVar5];
            local_200[iVar5] = cVar1;
            iVar5 = iVar5 + 1;
          } while (cVar1 != '\0');
          break;
        case 5:
          iVar5 = 0;
          do {
            cVar1 = s_RESUME_00752990[iVar5];
            local_200[iVar5] = cVar1;
            iVar5 = iVar5 + 1;
          } while (cVar1 != '\0');
          break;
        default:
          iVar5 = 0;
          do {
            cVar1 = (&DAT_007529b0)[iVar5];
            local_200[iVar5] = cVar1;
            iVar5 = iVar5 + 1;
          } while (cVar1 != '\0');
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 != 0) {
          iVar8 = *(int *)(iVar4 + 8);
        }
      }
      if ((piVar9[0x37] == 0) || (*piVar9 == 0)) {
        FUN_00647d10(local_40,&DAT_00752a00);
        iVar4 = 0;
        do {
          cVar1 = (&DAT_00752a04)[iVar4];
          local_1c0[iVar4] = cVar1;
          iVar4 = iVar4 + 1;
        } while (cVar1 != '\0');
      }
      else {
        iVar4 = FUN_0067b6c0();
        FUN_0064f190(local_40,&PTR_LAB_007529c4,(piVar9[0x37] - iVar4) / 0x88);
        switch(*(undefined4 *)(piVar9[0x37] + 0x54)) {
        case 0:
          iVar4 = 0;
          do {
            cVar1 = (&DAT_007529c8)[iVar4];
            local_1c0[iVar4] = cVar1;
            iVar4 = iVar4 + 1;
          } while (cVar1 != '\0');
          break;
        case 1:
          iVar4 = 0;
          do {
            cVar1 = (&DAT_007529d0)[iVar4];
            local_1c0[iVar4] = cVar1;
            iVar4 = iVar4 + 1;
          } while (cVar1 != '\0');
          break;
        case 2:
          iVar4 = 0;
          do {
            cVar1 = s_RUNNIN_007529e0[iVar4];
            local_1c0[iVar4] = cVar1;
            iVar4 = iVar4 + 1;
          } while (cVar1 != '\0');
          break;
        case 3:
          iVar4 = 0;
          do {
            cVar1 = s_PAUSEN_007529e8[iVar4];
            local_1c0[iVar4] = cVar1;
            iVar4 = iVar4 + 1;
          } while (cVar1 != '\0');
          break;
        case 4:
          iVar4 = 0;
          do {
            cVar1 = s_PAUSED_007529f0[iVar4];
            local_1c0[iVar4] = cVar1;
            iVar4 = iVar4 + 1;
          } while (cVar1 != '\0');
          break;
        case 5:
          iVar4 = 0;
          do {
            cVar1 = s_RESUME_007529d8[iVar4];
            local_1c0[iVar4] = cVar1;
            iVar4 = iVar4 + 1;
          } while (cVar1 != '\0');
          break;
        default:
          iVar4 = 0;
          do {
            cVar1 = (&DAT_007529f8)[iVar4];
            local_1c0[iVar4] = cVar1;
            iVar4 = iVar4 + 1;
          } while (cVar1 != '\0');
        }
      }
      iVar4 = *piVar9;
      if (iVar4 == 0) {
        puVar10 = &DAT_00752a10;
LAB_00678027:
        FUN_00647d10(local_140,puVar10);
      }
      else {
        if (iVar4 == 1) {
          puVar10 = &DAT_00752a0e;
          goto LAB_00678027;
        }
        if (iVar4 == 2) {
          puVar10 = &DAT_00752a0c;
          goto LAB_00678027;
        }
      }
      if (iVar8 == 0) {
        FUN_00647d10(local_100,&DAT_00752a1c);
        puVar10 = &DAT_007f9000;
      }
      else {
        uVar2 = __ftol();
        FUN_0064f190(local_100,&DAT_00752a14,uVar2);
        puVar10 = *(undefined **)(iVar8 + 0x1c);
      }
      switch(*(undefined4 *)(piVar9[0x30] + 0x28)) {
      case 0:
        puVar11 = &DAT_00752a24;
        break;
      default:
        goto switchD_00678081_caseD_1;
      case 2:
        puVar11 = &DAT_00752a2c;
        break;
      case 3:
        puVar11 = &DAT_00752a34;
        break;
      case 4:
        puVar11 = &DAT_00752a3c;
        break;
      case 5:
        puVar11 = &DAT_00752a44;
      }
      FUN_00647d10(local_180,puVar11);
switchD_00678081_caseD_1:
      FUN_0064f0d0(0,iVar7,s__d___s_s__s__s__s__s__s__s__s_00752a4c,iVar6,local_140,local_c0,
                   local_180,local_100,local_80,local_200,local_40,local_1c0,puVar10);
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 1;
    } while (iVar6 < 7);
  }
  return;
}

