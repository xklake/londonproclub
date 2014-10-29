<li>
      				[field:array runphp='yes']@me = (empty(@me['litpic']) ? "" : "<a href='{@me['arcurl']}' class='preview'><img src='{@me['litpic']}'/></a>"); [/field:array]
					<a href="[field:arcurl/]" class="title">[field:title/]</a>
					<span class="info">
						<small>City：</small>[field:city/]
						<small>Price：</small>[field:price/]
						<small>Type：</small>[field:brand/]
						<small>Address：</small>[field:address/]
					</span>
					<p class="intro">
						[field:description/]...
					</p>
				</li>