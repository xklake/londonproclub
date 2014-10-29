<li>
      				[field:array runphp='yes']@me = (empty(@me['litpic']) ? "" : "<a href='{@me['arcurl']}' class='preview'><img src='{@me['litpic']}'/></a>"); [/field:array]
					<div class="leftcontent">
                        <p> [field:title/]</p>
                        <p><span>
                            <small>City：</small>[field:city/]
                            <small>Price：</small>[field:price/]
                            <small>Type：</small>[field:brand/]
                            <small>Address：</small>[field:address/]
                        </span>
                        </p>
                        <p class="intro">
                            [field:description/]...
                        </p>
                    </div>
				</li>