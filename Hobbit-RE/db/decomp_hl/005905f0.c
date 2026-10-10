
/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_005905f0(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined4 local_14;
  undefined4 *local_10;
  int local_c [3];
  
  local_10 = param_1 + 0x19;
  iVar2 = FUN_0063ca80();
  piVar1 = param_3;
  *param_3 = iVar2 + 1;
  iVar2 = iVar2 + 1 + (param_1[0x22] + 1) * 0xc;
  *param_3 = iVar2;
  *param_3 = param_1[1] + 0x10 + iVar2;
  iVar2 = 0;
  if (0 < (int)param_1[0x14]) {
    do {
      iVar5 = *param_3;
      *param_3 = iVar5 + 4;
      *param_3 = iVar5 + 4 + (uint)*(ushort *)(param_1[0x15] + 2 + iVar2 * 4) * 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[0x14]);
  }
  iVar2 = *param_3;
  *param_3 = iVar2 + 4;
  iVar2 = thunk_FUN_0064ff70(iVar2 + 4,s_C__projects_meridian_Support_Sav_0074229c,0x365);
  *param_2 = iVar2;
  if (iVar2 != 0) {
    FUN_00648480(iVar2,*param_1,param_1[1]);
    puVar6 = (undefined1 *)(iVar2 + param_1[1]);
    *puVar6 = 0;
    local_24 = param_1[0x14];
    FUN_00648480(puVar6 + 1,&local_24,4);
    puVar6 = puVar6 + 5;
    iVar2 = 0;
    if (0 < local_24) {
      do {
        param_3 = (int *)(uint)*(ushort *)(param_1[0x15] + 2 + iVar2 * 4);
        FUN_00648480(puVar6,&param_3,2);
        param_2 = (int *)(uint)*(ushort *)(param_1[0x15] + iVar2 * 4);
        FUN_00648480(puVar6 + 2,&param_2,2);
        iVar5 = 0;
        puVar6 = puVar6 + 4;
        if ((short)param_3 != 0) {
          do {
            iVar3 = ((uint)*(ushort *)(param_1[0x15] + iVar2 * 4) + iVar5) * 2;
            local_1c = (uint)*(ushort *)(iVar3 + param_1[0xe]);
            local_20 = (uint)*(ushort *)(iVar3 + param_1[7]);
            FUN_00648480(puVar6,&local_20,2);
            local_18 = local_1c;
            FUN_00648480(puVar6 + 2,&local_18,2);
            puVar6 = puVar6 + 4;
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)((uint)param_3 & 0xffff));
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_24);
    }
    if (0 < (int)param_1[0x22]) {
      iVar2 = 0;
      do {
        local_18 = *(uint *)(param_1[0x23] + iVar2 * 8);
        local_14 = *(undefined4 *)(param_1[0x23] + 4 + iVar2 * 8);
        FUN_00648480(puVar6,&local_18,8);
        param_3 = *(int **)(param_1[0x2a] + iVar2 * 4);
        FUN_00648480(puVar6 + 8,&param_3,4);
        puVar6 = puVar6 + 0xc;
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_1[0x22]);
    }
    local_c[1] = 0;
    local_c[2] = 0;
    FUN_00648480(puVar6,local_c + 1,8);
    FUN_00648480(puVar6 + 8,local_c + 1,4);
    local_c[0] = FUN_0063ca80();
    local_c[0] = local_c[0] + 1;
    FUN_00648480(puVar6 + 0xc,local_c,4);
    iVar2 = FUN_0063ca80();
    uVar4 = FUN_0063cac0(iVar2 + 1);
    FUN_00648480(puVar6 + 0x10,uVar4);
    return;
  }
  *piVar1 = -1;
  *param_2 = 0;
  return;
}

