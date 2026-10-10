
int FUN_00692ca9(int *param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  
  if (((param_1 == (int *)0x0) || (param_1[7] == 0)) || (*param_1 == 0)) {
switchD_00692cec_default:
    iVar5 = -2;
  }
  else {
    bVar4 = param_2 != 4;
    param_2 = -5;
    iVar5 = -5;
    if (bVar4) {
      param_2 = 0;
    }
LAB_00692cdf:
    puVar2 = (undefined4 *)param_1[7];
    switch(*puVar2) {
    case 0:
      if (param_1[1] == 0) {
        return iVar5;
      }
      param_1[2] = param_1[2] + 1;
      param_1[1] = param_1[1] + -1;
      puVar2[1] = (uint)*(byte *)*param_1;
      puVar2 = (undefined4 *)param_1[7];
      uVar3 = puVar2[1];
      *param_1 = *param_1 + 1;
      if (((byte)uVar3 & 0xf) == 8) {
        if (((uint)puVar2[1] >> 4) + 8 <= (uint)puVar2[4]) {
          *puVar2 = 1;
          iVar5 = param_2;
          goto switchD_00692cec_caseD_1;
        }
        *puVar2 = 0xd;
        param_1[6] = (int)"invalid window size";
      }
      else {
        *puVar2 = 0xd;
        param_1[6] = (int)"unknown compression method";
      }
      goto LAB_00692d29;
    case 1:
switchD_00692cec_caseD_1:
      if (param_1[1] == 0) {
        return iVar5;
      }
      param_1[2] = param_1[2] + 1;
      param_1[1] = param_1[1] + -1;
      bVar1 = *(byte *)*param_1;
      *param_1 = (int)((byte *)*param_1 + 1);
      puVar2 = (undefined4 *)param_1[7];
      if ((puVar2[1] * 0x100 + (uint)bVar1) % 0x1f == 0) {
        if ((bVar1 & 0x20) != 0) {
          *(undefined4 *)param_1[7] = 2;
          iVar5 = param_2;
          goto switchD_00692cec_caseD_2;
        }
        *puVar2 = 7;
        iVar5 = param_2;
      }
      else {
        *puVar2 = 0xd;
        param_1[6] = (int)"incorrect header check";
        *(undefined4 *)(param_1[7] + 4) = 5;
        iVar5 = param_2;
      }
      goto LAB_00692cdf;
    case 2:
switchD_00692cec_caseD_2:
      if (param_1[1] != 0) {
        param_1[2] = param_1[2] + 1;
        param_1[1] = param_1[1] + -1;
        *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 << 0x18;
        *param_1 = *param_1 + 1;
        *(undefined4 *)param_1[7] = 3;
        iVar5 = param_2;
switchD_00692cec_caseD_3:
        if (param_1[1] != 0) {
          param_1[2] = param_1[2] + 1;
          param_1[1] = param_1[1] + -1;
          *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x10000;
          *param_1 = *param_1 + 1;
          *(undefined4 *)param_1[7] = 4;
          iVar5 = param_2;
switchD_00692cec_caseD_4:
          if (param_1[1] != 0) {
            param_1[2] = param_1[2] + 1;
            param_1[1] = param_1[1] + -1;
            *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x100;
            *param_1 = *param_1 + 1;
            *(undefined4 *)param_1[7] = 5;
            iVar5 = param_2;
switchD_00692cec_caseD_5:
            if (param_1[1] != 0) {
              param_1[2] = param_1[2] + 1;
              param_1[1] = param_1[1] + -1;
              *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1;
              *param_1 = *param_1 + 1;
              param_1[0xc] = ((undefined4 *)param_1[7])[2];
              *(undefined4 *)param_1[7] = 6;
              iVar5 = 2;
            }
          }
        }
      }
      break;
    case 3:
      goto switchD_00692cec_caseD_3;
    case 4:
      goto switchD_00692cec_caseD_4;
    case 5:
      goto switchD_00692cec_caseD_5;
    case 6:
      *(undefined4 *)param_1[7] = 0xd;
      param_1[6] = (int)"need dictionary";
      *(undefined4 *)(param_1[7] + 4) = 0;
      goto switchD_00692cec_default;
    case 7:
      iVar5 = FUN_00699eb6(puVar2[5],param_1,iVar5);
      if (iVar5 == -3) {
        *(undefined4 *)param_1[7] = 0xd;
        *(undefined4 *)(param_1[7] + 4) = 0;
        iVar5 = -3;
      }
      else {
        if (iVar5 == 0) {
          iVar5 = param_2;
        }
        if (iVar5 != 1) {
          return iVar5;
        }
        FUN_00699dc0(*(undefined4 *)(param_1[7] + 0x14),param_1,param_1[7] + 4);
        puVar2 = (undefined4 *)param_1[7];
        if (puVar2[3] == 0) {
          *puVar2 = 8;
          iVar5 = param_2;
          goto switchD_00692cec_caseD_8;
        }
        *puVar2 = 0xc;
        iVar5 = param_2;
      }
      goto LAB_00692cdf;
    case 8:
switchD_00692cec_caseD_8:
      if (param_1[1] == 0) {
        return iVar5;
      }
      param_1[2] = param_1[2] + 1;
      param_1[1] = param_1[1] + -1;
      *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 << 0x18;
      *param_1 = *param_1 + 1;
      *(undefined4 *)param_1[7] = 9;
      iVar5 = param_2;
    case 9:
      if (param_1[1] == 0) {
        return iVar5;
      }
      param_1[2] = param_1[2] + 1;
      param_1[1] = param_1[1] + -1;
      *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x10000;
      *param_1 = *param_1 + 1;
      *(undefined4 *)param_1[7] = 10;
      iVar5 = param_2;
switchD_00692cec_caseD_a:
      if (param_1[1] == 0) {
        return iVar5;
      }
      param_1[2] = param_1[2] + 1;
      param_1[1] = param_1[1] + -1;
      *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x100;
      *param_1 = *param_1 + 1;
      *(undefined4 *)param_1[7] = 0xb;
      iVar5 = param_2;
switchD_00692cec_caseD_b:
      if (param_1[1] == 0) {
        return iVar5;
      }
      param_1[2] = param_1[2] + 1;
      param_1[1] = param_1[1] + -1;
      *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1;
      puVar2 = (undefined4 *)param_1[7];
      *param_1 = *param_1 + 1;
      if (puVar2[1] == puVar2[2]) {
        *(undefined4 *)param_1[7] = 0xc;
LAB_00692fbb:
        return 1;
      }
      *puVar2 = 0xd;
      param_1[6] = (int)"incorrect data check";
LAB_00692d29:
      *(undefined4 *)(param_1[7] + 4) = 5;
      iVar5 = param_2;
      goto LAB_00692cdf;
    case 10:
      goto switchD_00692cec_caseD_a;
    case 0xb:
      goto switchD_00692cec_caseD_b;
    case 0xc:
      goto LAB_00692fbb;
    case 0xd:
      return -3;
    default:
      goto switchD_00692cec_default;
    }
  }
  return iVar5;
}

