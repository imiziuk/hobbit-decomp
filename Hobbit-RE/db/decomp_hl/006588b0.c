
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_006588b0(float param_1,ushort *param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  
  uVar3 = (uint)*param_2;
  iVar6 = 0;
  param_2 = param_2 + 1;
  do {
    if (uVar3 == 0) {
      return iVar6;
    }
    uVar1 = param_2[1];
    puVar8 = param_2 + 1;
    fVar2 = (float)*param_2 * _DAT_006f9424;
    uVar4 = uVar1 & 0x1fff;
    uVar7 = 0;
    if ((uVar1 & 0x2000) != 0) {
      uVar7 = (uint)(param_2[3] >> 1);
    }
    switch(uVar1 >> 0xe) {
    case 0:
      iVar5 = FUN_006584d0(uVar4,fVar2 + param_1,puVar8,param_3,param_4);
      break;
    case 1:
      iVar5 = FUN_00658660(uVar4,fVar2 + param_1,puVar8,param_3,param_4);
      break;
    case 2:
      iVar5 = FUN_00658670(uVar4,fVar2 + param_1,puVar8,param_3,param_4);
      break;
    case 3:
      iVar5 = FUN_00658d20(fVar2 + param_1,*(undefined4 *)(*(int *)(param_4 + 0x1a8) + uVar4 * 4),
                           param_3,param_4);
      break;
    default:
      goto switchD_0065891b_default;
    }
    iVar6 = iVar6 + iVar5;
switchD_0065891b_default:
    uVar3 = uVar3 - 1;
    param_2 = param_2 + uVar7 + 3;
  } while( true );
}

