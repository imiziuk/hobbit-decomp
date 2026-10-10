
void FUN_00657520(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar5 = DAT_007eb844;
  local_58 = (&DAT_007e884c)[param_1 * 0xc];
  local_54 = *(int *)(&DAT_007e8848 + param_1 * 0x30);
  iVar1 = (&DAT_007e8858)[param_1 * 0xc];
  local_40 = (&DAT_007e8868)[param_1 * 0xc];
  iVar2 = (&DAT_007e885c)[param_1 * 0xc];
  local_3c = (&DAT_007e886c)[param_1 * 0xc];
  iVar9 = DAT_007eb844 * 0x30;
  iVar4 = DAT_007eb844 * 0xc;
  DAT_007eb844 = DAT_007eb844 + 1;
  local_50 = (&DAT_007e8844)[param_1 * 0xc];
  local_5c = 0;
  local_64 = 0;
  local_7c = 0;
  local_80 = 0;
  local_6c = 0;
  local_68 = (&DAT_007e8850)[param_1 * 0xc];
  local_44 = (&DAT_007e8854)[param_1 * 0xc];
  local_60 = (&DAT_007e8860)[param_1 * 0xc];
  local_2c = (&DAT_007e8864)[param_1 * 0xc];
  local_38 = 0x7fffffff;
  iVar7 = iVar1;
  local_24 = local_44;
  local_20 = local_50;
  local_1c = local_54;
  local_18 = local_68;
  local_14 = local_58;
  local_8 = iVar1;
  if (iVar1 < local_2c) {
    do {
      FUN_00657080(iVar7,iVar2,local_60,iVar7,local_40,local_3c,&local_4c,&local_78,&local_70,
                   &local_74,&local_48);
      local_5c = local_5c + local_4c;
      local_64 = local_64 + local_78;
      local_7c = local_7c + local_70;
      local_80 = local_80 + local_74;
      local_6c = local_6c + local_48;
      local_50 = local_50 - local_4c;
      local_54 = local_54 - local_78;
      local_58 = local_58 - local_70;
      local_68 = local_68 - local_74;
      local_44 = local_44 - local_48;
      local_34 = FUN_00657cf0(local_50,local_54,local_58,local_68,local_44);
      iVar6 = FUN_00657cf0(local_5c,local_64,local_7c,local_80,local_6c);
      if (local_34 + iVar6 < local_38) {
        local_38 = local_34 + iVar6;
        local_8 = iVar7;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_2c);
  }
  local_5c = 0;
  local_64 = 0;
  local_7c = 0;
  local_80 = 0;
  local_6c = 0;
  local_50 = local_20;
  local_54 = local_1c;
  local_58 = local_14;
  local_68 = local_18;
  local_44 = local_24;
  local_30 = 0x7fffffff;
  local_84 = iVar2;
  local_4 = iVar2;
  if (iVar2 < local_40) {
    do {
      FUN_00657080(iVar1,local_84,local_60,local_2c,local_84,local_3c,&local_4c,&local_78,&local_70,
                   &local_74,&local_48);
      local_5c = local_5c + local_4c;
      local_64 = local_64 + local_78;
      local_7c = local_7c + local_70;
      local_80 = local_80 + local_74;
      local_6c = local_6c + local_48;
      local_50 = local_50 - local_4c;
      local_54 = local_54 - local_78;
      local_58 = local_58 - local_70;
      local_68 = local_68 - local_74;
      local_44 = local_44 - local_48;
      local_34 = FUN_00657cf0(local_50,local_54,local_58,local_68,local_44);
      iVar7 = FUN_00657cf0(local_5c,local_64,local_7c,local_80,local_6c);
      if (local_34 + iVar7 < local_30) {
        local_4 = local_84;
        local_30 = local_34 + iVar7;
      }
      local_84 = local_84 + 1;
    } while (local_84 < local_40);
  }
  local_5c = 0;
  local_64 = 0;
  local_7c = 0;
  local_80 = 0;
  local_6c = 0;
  local_50 = local_20;
  local_54 = local_1c;
  local_58 = local_14;
  local_68 = local_18;
  local_44 = local_24;
  local_28 = 0x7fffffff;
  iVar7 = local_60;
  local_84 = local_60;
  local_10 = local_60;
  if (local_60 < local_3c) {
    do {
      FUN_00657080(iVar1,iVar2,local_84,local_2c,local_40,local_84,&local_4c,&local_78,&local_70,
                   &local_74,&local_48);
      local_5c = local_5c + local_4c;
      local_64 = local_64 + local_78;
      local_7c = local_7c + local_70;
      local_80 = local_80 + local_74;
      local_6c = local_6c + local_48;
      local_50 = local_50 - local_4c;
      local_54 = local_54 - local_78;
      local_58 = local_58 - local_70;
      local_68 = local_68 - local_74;
      local_44 = local_44 - local_48;
      local_34 = FUN_00657cf0(local_50,local_54,local_58,local_68,local_44);
      iVar7 = FUN_00657cf0(local_5c,local_64,local_7c,local_80,local_6c);
      if (local_34 + iVar7 < local_28) {
        local_10 = local_84;
        local_28 = local_34 + iVar7;
      }
      local_84 = local_84 + 1;
      iVar7 = local_60;
    } while (local_84 < local_3c);
  }
  local_60 = local_38;
  cVar3 = local_30 < local_38;
  if ((bool)cVar3) {
    local_60 = local_30;
  }
  if (local_28 < local_60) {
    cVar3 = '\x02';
  }
  local_c = local_40;
  local_34 = local_3c;
  if (cVar3 == '\0') {
    local_74 = local_8;
    local_60 = local_8 + 1;
    local_78 = local_3c;
    local_4c = iVar7;
  }
  else {
    if (cVar3 == '\x01') {
      local_70 = local_4;
      local_48 = local_4 + 1;
      local_78 = local_3c;
      local_74 = local_2c;
      local_60 = iVar1;
      local_4c = iVar7;
      goto LAB_00657add;
    }
    if (cVar3 != '\x02') goto LAB_00657add;
    local_78 = local_10;
    local_74 = local_2c;
    local_60 = iVar1;
    local_4c = local_10 + 1;
  }
  local_70 = local_40;
  local_48 = iVar2;
LAB_00657add:
  local_50 = local_2c;
  local_38 = iVar7;
  local_30 = iVar2;
  local_28 = iVar1;
  FUN_006571e0(iVar1,iVar2,iVar7,local_74,local_70,local_78,&local_28,&local_30,&local_38,&local_74,
               &local_70,&local_78);
  FUN_006571e0(local_60,local_48,local_4c,local_2c,local_40,local_3c,&local_60,&local_48,&local_4c,
               &local_50,&local_c,&local_34);
  FUN_00657080(local_28,local_30,local_38,local_74,local_70,local_78,&local_5c,&local_64,&local_7c,
               &local_80,&local_6c);
  iVar1 = local_5c;
  local_54 = local_1c - local_64;
  iVar6 = local_20 - local_5c;
  local_58 = local_14 - local_7c;
  local_68 = local_18 - local_80;
  local_44 = local_24 - local_6c;
  uVar8 = FUN_00657cf0(local_5c,local_64,local_7c,local_80,local_6c);
  iVar7 = local_54;
  iVar2 = local_58;
  (&DAT_007e8840)[param_1 * 0xc] = uVar8;
  (&DAT_007e884c)[param_1 * 0xc] = local_7c;
  (&DAT_007e8850)[param_1 * 0xc] = local_80;
  *(int *)(&DAT_007e8848 + param_1 * 0x30) = local_64;
  (&DAT_007e8858)[param_1 * 0xc] = local_28;
  (&DAT_007e885c)[param_1 * 0xc] = local_30;
  (&DAT_007e8854)[param_1 * 0xc] = local_6c;
  (&DAT_007e8864)[param_1 * 0xc] = local_74;
  (&DAT_007e8868)[param_1 * 0xc] = local_70;
  (&DAT_007e8860)[param_1 * 0xc] = local_38;
  (&DAT_007e8844)[param_1 * 0xc] = iVar1;
  (&DAT_007e886c)[param_1 * 0xc] = local_78;
  uVar8 = FUN_00657cf0(iVar6,local_54,local_58,local_68,local_44);
  (&DAT_007e8840)[iVar4] = uVar8;
  (&DAT_007e8850)[iVar5 * 0xc] = local_68;
  (&DAT_007e8854)[iVar5 * 0xc] = local_44;
  (&DAT_007e8858)[iVar5 * 0xc] = local_60;
  (&DAT_007e885c)[iVar5 * 0xc] = local_48;
  (&DAT_007e8860)[iVar5 * 0xc] = local_4c;
  (&DAT_007e8844)[iVar5 * 0xc] = iVar6;
  *(int *)(&DAT_007e8848 + iVar9) = iVar7;
  (&DAT_007e884c)[iVar5 * 0xc] = iVar2;
  (&DAT_007e8864)[iVar5 * 0xc] = local_50;
  (&DAT_007e8868)[iVar5 * 0xc] = local_c;
  (&DAT_007e886c)[iVar5 * 0xc] = local_34;
  return;
}

